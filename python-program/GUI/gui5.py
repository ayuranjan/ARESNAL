#mouse click events    ...left click , right click and middle click all will trigger different events 
from tkinter import * 
root = Tk(className='click window ')

def leftclick(event):
    print("LEFT ")
def rightclick(event):
    print("RIGHT ")
def click(event):
    print("CENTER ")

frame = Frame(root,width =300,height = 250 )
frame.bind("<Button-1>",leftclick)
frame.bind("<Button-2>",rightclick)
frame.bind("<Button-3>",click)
frame.pack()


#button1 = Button(root,text = "CLICK")
root.mainloop()