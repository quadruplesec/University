def remove_leading(ip):
    ip_list = ip.split(".")
    nu_list = []

    for x in ip_list:
        if x.count("0") == len(x):
            nu_list.append("0")
        if int(x) > 0:
            for i in range(len(x)):
                if x[0] == "0":
                    x = x[1:]
            nu_list.append(x)
    return ".".join(nu_list)

print(remove_leading("255.024.01.01"))