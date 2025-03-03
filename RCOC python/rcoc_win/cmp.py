import os

f = open('currentprogrammename.txt')
x = f.read()
f.close()
command = 'g++ -std=c++17 "'+ x + '.cpp" -o a'
os.system(command)
