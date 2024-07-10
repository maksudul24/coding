import os

f = open('currentprogrammename.txt')
x = f.read()
f.close()
command ='vim "' + x +'.cpp"'
os.system(command)
