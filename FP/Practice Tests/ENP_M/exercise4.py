def list_paths(dirtree: tuple):
    dir, subtrees = dirtree
    paths = []
    for x in subtrees:
        if type(x) == str:
                paths += [dir+"/"+x]
        elif type(x) == tuple:
            paths += list_paths((dir+"/"+x[0], x[1]))
    return paths

print(list_paths(("Home", [("a", []), ("b", ["b.py", "b.c"]), ("c", []), "d.py", "e.c"])))
print(list_paths(("home", [("a", ["f.txt","g.py"]), ("b", ["f.py","g.c"]), ("d",["f.dat"])])))
print(list_paths(("home", [("a", []), ("b", []), ("c", [])])))
print(list_paths(("root", [("a",[("e",["i"]),"f.py","g.c", "h.lst"]),"b.txt", "c.dat", ("d", ["j","d.py","d.ext","k"])])))