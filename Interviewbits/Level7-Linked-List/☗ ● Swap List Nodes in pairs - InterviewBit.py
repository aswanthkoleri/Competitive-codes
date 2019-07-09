# Definition for singly-linked list.
# class ListNode:
#	def __init__(self, x):
#		self.val = x
#		self.next = None

class Solution:
	# @param A : head node of linked list
	# @return the head node in the linked list
	def swapPairs(self, A):
		p=prev=A
		head=None
		while p!=None and p.next !=None:
			a=p
			b=p.next
			p=p.next.next
			# print(p.val,p.next.val)
			prev=b
			b.next=a
			if p.next !=None:
				a.next=p.next
			else:
				a.next=p

			if head==None:
				head=prev
			prev=a.next
		# if p!=None:
			# a.next=a
		return head


