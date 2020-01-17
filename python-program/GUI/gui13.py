from tkinter import *
root = Tk()
root.fileName = filedialog.askopenfilename \
                (filetypes=(("Python Stuff", ".PY"), \
                            ("All files","*.*")))

print(root.fileName)         # prints filename
                                         # onto terminal
root.title(root.fileName)  # put filename into
                                        # title bar

#read the contents of the file
# into the variable:  text
# print it onto the screen for shits and giggles
text1 = open(root.fileName).read()
print(text1)

# zee buffer:   'text1'
T = Text(root, height=15, width=60)
T.pack()                    # pack that textbox into
                                 # the root window
T.insert(END,text1) #insert all the text up to 
                                 # just after the last char
                                 # in:   text1
###
root.mainloop()

