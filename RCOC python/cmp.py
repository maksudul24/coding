import os

f = open('currentprogrammename.txt')
x = f.read()
f.close()
command = 'g++ "'+ x + '.cpp" -o a'
os.system(command)
