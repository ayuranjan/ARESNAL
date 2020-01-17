from tkinter import * 
root = Tk(className='click window ')
one = Label(root,text ="Enter your name" , bg = 'red',fg = 'white')
#one.pack()
one.grid(row =0 ,column = 0)
one = Label(root,text ="HELLO UNKNOWN" , bg = 'red',fg = 'white')
#one.pack()
one.grid(row =1 ,column = 1)
#lets create entry box
Tk()
name = StringVar()
user_entry = Entry(root,width = 24,textvariable = name)
user_entry.grid(row =0 ,column = 1)
#user_entry.pack(side = LEFT)
name = Tk.StringVar()


root.mainloop()