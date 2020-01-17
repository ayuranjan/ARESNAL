#how to use classes ...
#this is the standard way to make a GUI or a software
#here we will create a button and when clicked it will dispaly something  & another button which when clicked it exits
from tkinter import *


class ayush_button:
    def __init__(self,master):# master means the root or main window 
        frame = Frame(master)
        frame.pack()

        self.printButton = Button(frame,text = "print something ",command = self.printmessage)
        self.printButton.pack(side =LEFT)

        self.quitButton =Button(frame,text = 'quit',command = frame.quit)#quit is the inbuilt function to quit main window 
        self.quitButton.pack(side =LEFT)

    def printmessage(self):
        print("WOW IT WORKS ")

        
root =Tk()
b = ayush_button(root)
root.mainloop()