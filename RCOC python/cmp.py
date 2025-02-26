import os

f = open('currentprogrammename.txt')
x = f.read()
command = 'g++ "'+ x + '.cpp" -o a'
os.system(command)
