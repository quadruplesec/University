import os
print(os.listdir())
print(os.getcwd())
os.chdir(r"/home/sonozaki/Desktop/FEUP/Fundamentos de Programação/University/FP/Practise/a")
with open("testfile.txt", "r+") as f:
    content = f.read()
print(content)