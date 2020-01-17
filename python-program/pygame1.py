
import pygame
import sys

pygame.init() #this iniatializes pygame and all the modules in it . this is the first thing you do
gameDisplay = pygame.display.set_mode((800, 600)) # this set the resolution of the display 
pygame.display.pygame.display.set_caption('Race Car ', icontitle='race') #this sets the name of the window opening 
clock = pygame.time.Clock() #we use it for frame per  second
crashed = False
while not crashed :
    for event in pygame.event.get(): #this creates list of all the events that happened like key is pressed, mouse moved or clicked  etc 
        if event.type == pygame.QUIT: #for the most part is someone hits the x in window popup
            crashed =True #to get of loop 
        print(event)#this will print of the events that happened
        #this all will run in 1 frame per second 
        pygame.display.update()#this will update the entire window , if we pass argument inside update() it will update a certain part of window
        pygame.time.tick(60) #this is frame per second ..more the fps the more smooth the window looks 
        #to exit or  quit
pygame.quit()
quit()


