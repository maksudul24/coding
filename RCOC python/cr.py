import pyperclip as cp

f = open('currentprogrammename.txt','w')
x = cp.paste()
f.write(x)
print(x)
f.close()
