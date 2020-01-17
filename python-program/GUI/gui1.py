from tkinter import * 
window = Tk()
# frame = it is just an ivisible layout/box where we can keep out stuffs 
topframe = Frame(window)
#now we have to place it in scren ..and to do that we use pack 
topframe.pack()
bottomframe = Frame(window )
bottomframe.pack(side = BOTTOM)

# lets make button 
butt = Button(topframe,text = "lol")
button1 = Button(topframe,text="Click Me",fg = 'red')
button2 = Button(topframe,text = "YAY",fg ='blue')
button3 = Button(bottomframe,text ="DONE ",fg = 'green')

button1.pack(side = LEFT)
button2.pack()
button3.pack(side = RIGHT)




window.mainloop()