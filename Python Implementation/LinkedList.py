class Node:
  def __init__(self, val):
    self.data = val 
    self.next = None 

class LL:
  def __init__(self):
    self.head = None 

  def addLast(self, val):
    if self.head==None:
      self.head = Node(val)
    else:
      t = self.head
      while t.next!=None:
        t = t.next 
      t.next = Node(val)

  def addFirst(self, val):
    if self.head==None:
      self.head = Node(val)
    else:
      t = Node(val)
      t.next = self.head
      self.head = t

  def addAt(self, x, val):
    if x==1:
      self.addFirst(val)
    else:
      t = self.head 
      while (x-1)>1:
        t = t.next 
        x-=1 
      temp = Node(val)
      temp.next = t.next
      t.next =temp 

  def delLast(self):
    if self.head==None:
      print("Empty List!")
    else:
      t = self.head
      while t.next.next!=None:
        t = t.next 
      t.next = None

  def delFirst(self):
    if self.head==None:
      print("Empty List!")
    else:
      self.head = self.head.next

  def delAt(self, x):
    if x==1: 
      self.delFirst()
    else:
      t = self.head
      while (x-1)>1:
        t = t.next 
        x-=1 
      t.next = t.next.next 

  def reverse(self):
    curr = self.head 
    prev = None
    post = None
    while curr!=None:
      post = curr.next
      curr.next = prev 
      prev = curr
      curr=post 
    self.head = prev

  def show(self):
    if self.head==None:
      print("Empty List!")
    else:
      t = self.head 
      while t!=None:
        print(t.data)
        t = t.next
    print("-"*10)

ll = LL()
ll.show()
ll.addFirst(1)
ll.addLast(50)
ll.addLast(5)
ll.addFirst(6)
ll.addFirst(10)
ll.show()
ll.delLast()
ll.show()
ll.delAt(4)
ll.show()
ll.addAt(2, 20)
ll.show()
ll.reverse()
ll.show()

'''
Empty List!
----------
10
6
1
50
5
----------
10
6
1
50
----------
10
6
1
----------
10
20
6
1
----------
1
6
20
10
----------
'''
