import pyperclip as cp

f = open('currentprogrammename.txt','w')
x = input('Enter The File Name:')
f.write(x)
print(x)
f.close()
