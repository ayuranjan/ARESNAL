#grid layout ...better the pack 
#we can line up/organise  our wigdets in rows and column 
from tkinter import *
root = Tk()


label1 = Label(root,text = 'Name')
label2 = Label(root,text = 'Password')
# entry are blank spaces where user enters the details eg -his name ,number ,etc 
entry1 = Entry(root)
entry2 =Entry(root)

label1.grid(row = 0 ,column = 0 ,sticky  = E)# coloumns are by default 0 so we can skip that ,E = east ,N= north ,etc 
label2.grid(row = 1 ,sticky = E)

entry1.grid(row = 0,column = 1)
entry2.grid(row =1 ,column = 1)

#create a check box 
c = Checkbutton(root,text = "Keep me logged in ")
c.grid(columnspan = 2 )

root.mainloop()