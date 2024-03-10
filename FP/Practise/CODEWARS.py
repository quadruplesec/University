def camel_case(s):
    s += "_"
    lista = s.split("_")
    if "" in lista: lista.remove("")
    return lista

print(camel_case("Hello i am gay"))