# Node Class
class Node:
	"""docstring for Node"""
	def __init__(self, V):
		self.V = V
		self.next = None

# Linked List class
class LinkedList:
	def __init__(self):
		self.head=None

	# For adding item in the beginning
	def add(self,item):
		newNode=Node(item)
		newNode.next=self.head
		self.head=newNode

	def append(self,item):
		newNode=Node(item)

		if self.head==None:
			self.head=newNode
			return
		else:
			it=self.head
			# iterate till the last item
			while it.next is not None:
				it=it.next
			it.next=newNode
			return

	# Function to reverse a Linked List
	def reverseList(self):
		# Maintain prev,curr and next
		prev=None
		current=self.head
		while current is not None:
			next=current.next
			current.next=prev
			prev=current
			current=next
		self.head=prev

	# To print a list
	def printList(self):
		it=self.head
		while it:
			print(it.V,end=" ")
			it=it.next

	def getList(self):
		it=self.head
		LL=[]
		while it:
			LL.append(it.V)
			it=it.next
		return LL
		
def main():
	# Creating a linked list
	LL=LinkedList()
	list_input=list(map(int,input().split()))
	for i in list_input:
		LL.append(i)
	l=LL.getList()
	# LL.printList()
	LL.reverseList()
	r=LL.getList()
	# print(r)
	# print(l)
	if "".join(map(str,l)) == "".join(map(str,r)):
		print("Palindrome")
	else:
		print("Not Palindrome")
	# print()
	# LL.printList()

main()