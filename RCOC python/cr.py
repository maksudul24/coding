import pyperclip as cp

f = open('currentprogrammename.txt','w')
x = cp.paste()
if(len(x) > 0):
    f.write(x)
    print(x)
else:
    print('\033[31m !!!warning: ClipBoard Empty.\033[0m')

f.close()
