import os
import pyperclip as cp

f = open('currentprogrammename.txt')
x = f.read()
y = x + '.cpp'
try:
    cppfile = open(y)

    code = cppfile.read()
    code = code.replace('open_file;','//open_file;')
    cp.copy(code)

    cppfile.close()
except FileNotFoundError:
    print('Selected file not found')

f.close()
