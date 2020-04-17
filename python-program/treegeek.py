# codes from practice on trees on geeks for geeks 



#Determine if Two Trees are Identical Method 1 - compare inorder/preorder/postorder/level order of both trees if same both trees are identical 
def inorder(root,queue):
    if root is None :
        return 
    else :
        inorder(root.left,queue)
        queue.append(root.data)
        inorder(root.right,queue)
        return queue
        
def isIdentical(root1, root2):
    
    # Code here
    if root1 is None and root2 is None :
        return True 
    q1 =[ ]
    q1 = inorder(root1,q1)
    q2 = [ ]
    q2 = inorder(root2, q2 )
    n  =len(q1)
    count = 0
    if len(q1) == len(q2):
        for i in range(0,n):
            if q1[i] == q2[i] :
                count = count + 1 
        if count == n :
            return True 
        else :
            return False
    else :
        return False 


#method 2 
def isIdentical(root1, root2):
    
    if (root1==None and root2==None):
        return True

    elif (root1!=None and root2!=None):
        return (root1.data==root2.data and isIdentical(root1.left,root2.left) and isIdentical(root1.right,root2.right))

    else:
        return False
    

# to count numbers of leaf node in a tree 

def countLeaves(root):
    # Code here
    if root is None :
            return 
    q =[]
    count = 0
    q.append(root)
    while len(q) > 0:
        temp = q[0]
        if temp.left is None and temp.right is None:
            count = count + 1 
        if temp.left is not None :
                q.append(temp.left)
        if temp.right is not None :
                q.append(temp.right)
        q.pop(0)
    return count


# to find if a  tree is balanced or not 
def height(root):
    if root is None :
            return 0 
    else :
        lh = height(root.left)
        rh = height(root.right)
        if lh > rh :
                return 1 + lh
        else :
                return 1 + rh 
def isBalanced(root):
    
    #add code here
    if root is None :
        return True
    l= height(root.left)
    r = height(root.right)
    return (abs(l-r) <= 1) and isBalanced(root.left ) and isBalanced(root.right)  



# diameter of binary tree - efficient method 
def height(root, ans): 
    if (root == None): 
        return 0
  
    left_height = height(root.left, ans)  
  
    right_height = height(root.right, ans)  
  
    # update the answer, because diameter  
    # of a tree is nothing but maximum  
    # value of (left_height + right_height + 1) 
    # for each node  
    ans[0] = max(ans[0], 1 + left_height + 
                             right_height)  
  
    return 1 + max(left_height, 
                   right_height) 
  
def diameter(root):
    # Code here
    if (root == None):  
        return 0
    ans =[0]  # This will store 
                          # the final answer  
    height_of_tree = height(root, ans)  
    return ans[0] 
      
        




