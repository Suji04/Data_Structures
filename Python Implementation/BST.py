class Node:
  def __init__(self, val):
    self.data = val 
    self.left = None 
    self.right = None

def addNode(root, val):
  if root is None:
    return Node(val)
  else:
    if val>root.data:
      root.right = addNode(root.right, val)
    elif val<root.data:
      root.left = addNode(root.left, val)
    else:
      return root
  return root

def inorder(root):
  if root is None: 
    return
  inorder(root.left)
  print(root.data)
  inorder(root.right)
  
root = Node(0)
root = addNode(root, 10)
root = addNode(root, 13)
root = addNode(root, -10)
inorder(root)

'''
-10
0
10
13
'''
