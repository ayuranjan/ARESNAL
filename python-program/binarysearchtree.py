class node :
    def __init__(self,key):
        self.data = key
        self.left = None
        self.right = None

    def insert(self,key):
        if self.data :
            if key < self.data : 
                if self.left is None:
                    self.left = node(key)
                else:
                    self.left.insert(key)
            elif key > self.data : 
                if self.right is None:
                    self.right= node(key)
                else : 
                    self.right.insert(key)
        else :
            self.data = key 

    def inorder(self):
        if self.left :
            self.left.inorder()
        print(self.data)
        if self.right :
            self.right.inorder()
    def preorder(self):
        print(self.data)
        if self.left :
            self.left.preorder()
        if self.right:
            self.right.preorder()
    def postorder(self):
        if self.left :
            self.left.postorder()
        if self.right :
            self.right.postorder()
        print(self.data)

    def find(self , key ):
        if key == self.data :
            return True 
        elif key < self.data :
            if self.left is None:
                return False
            return self.left.find(key)
        elif key > self.data :
            if self.right is None:
                return False 
            else :
                return self.right.find(key)
    def levelorder(self):
         h =self.height(root)
         for i in range(1,h+1 ):
             self.levelorderatthatlevel(root, i)
    def levelorderatthatlevel(self,root,level):
        if root is None:
            return 
        elif level ==1 :
            print(root.data)
        else :
            self.levelorderatthatlevel(root.left,level-1)
            self.levelorderatthatlevel(root.right,level-1)
            

    def height(self,node):
        if node is None:
            return 0 
        else :
            lheight =self.height(node.left)
            rheight =self.height(node.right)
            if lheight > rheight:
                return lheight + 1
            else :
                return rheight + 1 

    def levelorderusingqueue(self,node ):
        if node is None:
            return
        queue=[]
        queue.append(node)
        while (len(queue) > 0 ):
            print(queue[0].data)
            temp_node = queue[0]
            if temp_node.left is not None:
                queue.append(temp_node.left)
            if temp_node.right is not None:
                queue.append(temp_node.right)
            temp_node = queue.pop(0)
    def count(self):
        
        if self is None:
            return 0
        else :
            return 1  + self.left.count() + self.rigth.count()
    def maxval(self,root):
        if root is None:
            return -1 
        else :
            return max (root.data , max(self.maxval(root.left),self.maxval(root.right)))

    def childrensum(self,root):
        if root is None :
            return True
        
        if root is not None and root.left is None and root.right is None :
            return True
        sum = 0
        if root.left :
            sum = sum + root.left.data
        if root.right :
            sum = sum + root.right.data
        return (sum == root.data and childrensum(root.left) and childrensum(root.right))
    def findpath(self,root,key,path):
        if root is None :
            return False
        path.append(root)
        if root.data == key :
            return True
        
        if self.findpath(root.left,key,path)  or self.findpath(root.right,key,path):
            return True
        path.pop()
        return False

    def LCA(self,root,n1 ,n2 ):
        path1 =[]
        path2 =[]
        if self.findpath(root,n1,path1) or self.findpath(root,n2,path2):
            return None
        i =0 
        while i < len(path1) or i < len(path2):
            if path1[i+1] != path2[i+1]:
                return path1[i]
        return None
    def minval(self,root):
        current = root
        while  current.left is not None:
            current = current.left 
        return current

    def deletenode(self,root,val):
        if root is None:
            return root

        # to find the root to be deleted 
        if val > root.data :
            self.deletenode(root.right,val)
            return root
        elif val < root.data :
            self.deletenode(root.left,val)
            return root
        #after we found the node 
        else :
            # if node has only 1 child 
            if root.left is None:
                temp = root.right
                del root
                return temp 
            elif root.right is None : 
                temp = root.left 
                del root 
                return temp 
            # if node has 2 child 
            temp = self.minval(root.right)
            root.data = temp.data
            root.right = self.deletenode(root.right , temp.data) 
        return root

            


        




root = node(12)
root.insert(6)
root.insert(14)
root.insert(3)
root.insert(5)
root.insert(4)
#root.preorder()
'''
print('preorder')
root.preorder()
print('postorder ')
root.postorder()
print('inorder')
root.inorder()


print(root.find(12))
print(root.find(42))
print(root.find(14))
print(root.find(3))'''
#root.levelorder()
#root.levelorderusingqueue(root)
print(root.count())
#print(root.maxval(root))
#print(root.height(root))
#print(root.childrensum(root))      #Not applicable for this type of tree . so always false . change insertion operation for this to work
# print(root.LCA(root,3,4)) # something's wrong 
#root.deletenode(root,5)  #not working againnnnnnnnnnn
#root.levelorderusingqueue(root)
