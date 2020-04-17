class tree:
    def __init__(self,key):
        self.data = key 
        self.left = None
        self.right = None 

    def insert(self,root,key):
        if root.data :
            if key > root.data : 
                if root.right is None :
                    root.right = tree(key)
                else :
                    self.insert(root.right ,key )
            elif key < root.data :
                if root.left is None :
                    root.left = tree(key)
                else :
                    self.insert(root.left ,key )
        else : 
            root.data = key 
    def inorder(self,root):
        if root.left is not None :
            self.inorder(root.left )
        print(root.data )
        if root.right is not None :
            self.inorder(root.right)

    def preorder(self,root):
        print(root.data )
        if root.left is not None :
            self.preorder(root.left)
        if root.right is not None :
            self.preorder(root.right)
    def postorder(self,root):
        if root.left is not None :
            self.postorder(root.left )
        if root.right is not None :
            self.postorder(root.right)
        print(root.data)
    def find(self,root,value):
        if root.data == value :
            return True 
        else :
            if root.data > value :
                if root.left is None :
                    return False 
                else :
                    return self.find(root.left ,value)
            if root.data < value :
                if root.right is None :
                    return False
                else :
                    return self.find(root.right,value )
    def height(self,root):
        if root is None :
            return 0 
        else :
            lh = self.height(root.left)
            rh = self.height(root.right)
            if lh > rh :
                return 1 + lh
            else :
                return 1 + rh 

    def count(self,root):
        if root is None :
            return 0 
            
        else :
            return  1 + self.count(root.left ) + self.count(root.right)


    def maxvalue( self,root):
        if root is None :
            return -1
        else :
            return max(root.data ,max(self.maxvalue(root.left),self.maxvalue(root.right))) 
    def minvalue(self,root):
        if root is None :
            return -1 
        if root :
            if root.left :
                return self.minvalue(root.left)
            else :
                return root.data

    def levelorder(self,node ):
        h = self.height(node)
        for i in range(1,h+1):
            self.levelorderatthatlevel(node,i)

    def levelorderatthatlevel(self,root,level):
        if root is None :
            return 
        if level == 1 :
            print(root.data)
        else :
            self.levelorderatthatlevel(root.left,level -1 )
            self.levelorderatthatlevel(root.right,level -1 )


    def levelorderusingqueue(self,root):
        if root is None :
            return 
        q =[]
        q.append(root)
        while len(q) > 0:
            temp = q[0]
            if temp.left is not None :
                q.append(temp.left)
            if temp.right is not None :
                q.append(temp.right)
            print(temp.data)
            q.pop(0)

    def deleteNode(self,root, key): 

        if root is None: 
            return root  
        if key < root.data: 
            root.left = self.deleteNode(root.left, key) 
        elif(key > root.data): 
            root.right = self.deleteNode(root.right, key) 
        else: 
            if root.left is None : 
                temp = root.right  
                root = None 
                return temp  
              
            elif root.right is None : 
                temp = root.left  
                root = None
                return temp 
  
            temp = self.minvalue(root.right) 
            root.data = temp.data 
            root.right = self.deleteNode(root.right , temp.data) 
    
  
        return root 

    def spiraltraversal(self,root):
        if root is None :
            return 
        q =[]
        count = 0 
        q.append(root)
        while len(q) > 0:
                temp = q[0]
                if count %2 == 0:
                    if temp.right is not None :
                        q.append(temp.right)
                    if temp.left is not None :
                        q.append(temp.left)
                else :
                    if temp.left is not None :
                        q.append(temp.left)
                    if temp.right is not None :
                        q.append(temp.right)

                    
                print(temp.data)
                count = count +1 
                q.pop(0)

    def levelorderlinebyline(self,root):
        if root is None :
            return 
        q =[]
        q.append(root)
        q.append(None)
        while(len(q) >0):
            if len(q) == 1 and q[0] is None :
                break
            if len(q) > 1 and q[0] is None :
                q.append(None)
                print("")

            else :
                temp = q[0]
                if temp.left is not None :
                    q.append(temp.left)
                if temp.right is not None :
                    q.append(temp.right)
                print(temp.data,end = " ")
            q.pop(0)
                
    
root = tree(10)
root.insert(root,6)
root.insert(root,14)
root.insert(root,12)
root.insert(root,16)
root.insert(root,3)
root.insert(root,2)
root.insert(root,5)
root.insert(root,4)
print("preorder")
root.preorder(root)
print("inorder")
root.inorder(root)
print("postorder")
root.postorder(root)
print(root.find(root,17))
print(root.height(root))
print(root.count(root))
print(root.maxvalue(root))
print(root.minvalue(root))

print("level order =")
root.levelorder(root)

print("level order using queue")
root.levelorderusingqueue(root)

#root.deleteNode(root,4)

#print("treee after deletion ")
#root.postorder(root)

print("nodes in spiral form is ")
root.spiraltraversal(root)



print("level order line by line is ")
root.levelorderlinebyline(root)
