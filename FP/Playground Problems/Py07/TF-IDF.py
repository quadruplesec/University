import math
def tfidf(documents):
    N = len(documents)
    vocabulary = list()
    for x,y in enumerate(documents):
        documents[x] = (y.lower()).split(" ")
    for x in range(len(documents)):
        vocabulary += documents[x]
    
    tf = dict()

    for x in vocabulary:
        if x not in tf:
            tf[x]=[]
            for y in range(len(documents)):
                tf[x].append(0)
    
    for x, y in enumerate(documents):
        for z in y:
            tf[z][x] += 1

    IDF = lambda a, b: math.log(a/b)
    n_dict = dict()

    for keys in tf.keys():
        n_dict[keys] = 0

    for keys in tf.keys():
        for x, y in enumerate(documents):
            if keys in y:
                n_dict[keys] += 1
    
    for keys in tf.keys():
        for x, y in enumerate(tf[keys]):
            tf[keys][x] = round(tf[keys][x] * IDF(N, n_dict[keys]),3)


    return tf

    



    
    


print(tfidf(['To be or not to be', 'Impossible is a word to be found only in the dictionary of fools', 'There is nothing impossible to him who will try']))