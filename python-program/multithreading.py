from threading import * #to inherit thread class
from time import * #this is used to implement sleep

class Hello(Thread): #inherits thread class
    def run(self):  # use run method while creating threads
        for i in range(5):
            print("HELLO AYUSH")
            sleep(1)

class Hi(Thread):
    def run(self):
        for i in range(5):
            print("HI AYUSH")
            sleep(1)

o1 = Hello()
o2 = Hi()

o1.start()
sleep(0.2) #so that these two threads donot collide 
o2.start()
o1.join()   #after using join  next execution will only start only when the thread has completed execution 
o2.join()

print("Finish")


