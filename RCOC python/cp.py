import pyperclip as cp

f = open('input.txt','w')
print('Input is coppied')
f.write(cp.paste())
f.close()
