#binding function to layouts 
from tkinter import * 
root = Tk()

def printName():
    print("My name is Ayush Ranjan")
def printMe(event): #whenever a event occur .....events are any movement of mouse , click, pressing of key ,etc 
    print("Sometghing happpened ")


button1 = Button(root,text = "Display my name ",command = printName) #do no write () of functions here 
button1.pack()


# method 2 for binding 

button2 = Button(root,text = "YASSSSS")
button2.bind("<Button-1>",printMe) # bind takes 2 parameters ..what event are you waiting for occur and ,what function you wanna call 
button2.pack()











root.mainloop()