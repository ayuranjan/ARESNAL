class newtork(RuntimeError):
    def __init__(self,arg):
        self.arg = arg    
try :
    raise newtork("BAAD")
except newtork as e:
    print(e.arg)