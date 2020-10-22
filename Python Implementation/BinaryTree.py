class Node:
  def __init__(self, val):
    self.data = val 
    self.left = None 
    self.right = None

def inorder(root):
  if root is None: 
    return
  inorder(root.left)
  print(root.data)
  inorder(root.right)

def preorder(root):
  if root is None: 
    return
  print(root.data)
  preorder(root.left)
  preorder(root.right)

def postorder(root):
  if root is None: 
    return
  postorder(root.left)
  postorder(root.right)
  print(root.data)

root = Node(12)
root.left = Node(11)
root.right = Node(20)
root.left.left = Node(30)
root.left.right = Node(10)
root.right.left = Node(0)
root.left.left.right = Node(9)

inorder(root)
print('-'*10)
preorder(root)
print('-'*10)
postorder(root)
print('-'*10)

'''
30
9
11
10
12
0
20
----------
12
11
30
9
10
20
0
----------
9
30
10
11
0
20
12
----------
'''
