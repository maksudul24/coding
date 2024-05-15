import sys
file_name = input("Enter File Name:")
the_word = "open_file;"
add_before = "//"


try:
    with open(file_name,"r") as fileR:
        words = fileR.read()
        ind = words.find(the_word)
        if(ind == -1):
            print("selected word not found")
            sys.exit()
        start_part = words[:ind - 1]
        end_part = words[ind:]
        words_final = start_part + "//" + end_part
        try:
            with open("sample.cpp","w") as fileW:
                fileW.write(words_final)
                print("New sample.cpp file has created")
        except Exception as e:
            print("Writing Error",e) 
except Exception as e:
    print("File Open Error", e)
