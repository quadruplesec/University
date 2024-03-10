def bubble_sort(alist):
    def aux_bubble(alist, counter=1, swapcount=0):
        if counter == len(alist):
            return (alist,swapcount)
        
        if alist[counter-1] > alist[counter]:
            a = alist[counter - 1]
            alist[counter-1] = alist[counter]
            alist[counter] = a
            return aux_bubble(alist, counter+1, swapcount+1)
        
        return aux_bubble(alist, counter+1, swapcount)
    
    if aux_bubble(alist)[1] != 0:
        return bubble_sort(aux_bubble(alist)[0])
    return aux_bubble(alist)[0]

print(bubble_sort([192, 12378, 12, -113, 12.5, 10]))