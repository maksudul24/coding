Requirments:
python,vim editor and g++ compiler enabled windows command line.

[To enable python,vim and g++ in windows command line install vim and mingw and
install them, then set the file path from environment variables in windows or
search it on internet.]

*Copy all the files into the code folder to run there

Operations:
type this on windows command line and press enter:

python cr.py </br>
[This will copy from your clipboard and set that the file name for the code file]

python op.py </br>
[This will create a new file with the template or open a file existing code in
vim] 

python cmp.py </br>
[This will compile the code and create an exicutable file named "a", you can
type a and run the code or use python rn.py to run the with input displayed]

python rn.py  </br>
[This will run the exicutable "a" with input from input.txt and show them in
terminal]
 
python cp.py </br>
[This will copy clipboard to input.txt]

python mcr.py </br>
[This command takes input from the user set it as file name]

python pst.py </br>
[This will copy the code to clipboard with // added infrot of 'open_file' line]


*Vim integration

1.'Alt + n' will copy the filename from clipboard (python cr.py)
2.'Alt + b' will compile the code and genrate 'a'(python cmp.py)
3.'Alt + r' will run a
4.'Alt + e' will run the code with input(python rn.py)
5.'Alt + i' will copy input from clipboard(python cp.py)
6.'Alt + p' will paste the code with added //open_file (python pst.py)
