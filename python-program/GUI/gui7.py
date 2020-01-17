#creating drop down menu  and tool bar  and status bar 
from tkinter import * 


def do_nothing():
    print("OKKKKKKKKKKK i get it ")

root  = Tk()

menu = Menu(root) #tkinter has inbuilt menu function ,,root is where we wanr to display it 
root.config(menu = menu)# we have to configure our menu so that tkinter knows it is a menu and then it will itslef place it in the top  and rest thing like what to take ,etc 

submenu  = Menu(menu) # it will be just like drop box menu ..submenu is inside menu2 
#drop down functionality is callled chasceding in tkinter 
menu.add_cascade(label = "NEW file",menu = submenu) # it creates a file button which have drop down functionality and iside it we have submenu 

submenu.add_command(label="new project ",command = do_nothing)
submenu.add_command(label="lol ",command = do_nothing)
# to seperate the menu / sub menu tkinter has seperator function 
submenu.add_separator()
submenu.add_command(label ='exit' ,command = do_nothing)



root.mainloop()