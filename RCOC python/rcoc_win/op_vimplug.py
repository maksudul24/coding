import os

f = open('currentprogrammename.txt')
x = f.read()
y = x + '.cpp'
try:
    cppfile = open(y)
    cppfile.close()
except FileNotFoundError:
    copycommand = 'copy template.cpp "'+ y + '"'
    os.system(copycommand)

f.close()
