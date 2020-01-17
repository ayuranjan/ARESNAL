from tkinter import * 
root = Tk()
one = Label(root,text ="ONE" , bg = 'red',fg = 'white')
one.pack()

two = Label(root,text ="Second" , bg = 'green',fg = 'black')
two.pack(fill = X)#we want to fill as much as screen grows  unless it  would remain same
three = Label(root,text ="THree" , bg = 'blue',fg = 'white')
three.pack(side = LEFT, fill = Y) # it will grow in y direction 
root.mainloop()