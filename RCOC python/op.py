import os

f = open('currentprogrammename.txt')
x = f.read()
command ='vim "' + x +'.cpp"'
os.system(command)
