# Definition for singly-linked list.
# class ListNode:
#    def __init__(self, x):
#        self.val = x
#        self.next = None
def reverseList(head):
        # Maintain prev,curr and next
    prev=None
    current=head
    while current is not None:
        next=current.next
        current.next=prev
        prev=current
        current=next
    head=prev
    return head

def getList(head):
    it=head
    LL=[]
    while it:
        LL.append(it.val)
        it=it.next
    return LL

class Solution:
    # @param A : head node of linked list
    # @return an integer
    
        
    def lPalin(self, A):
        l=getList(A)
       # print(l)
        A=reverseList(A)
        
        r=getList(A)
       # print(r)
        if "".join(map(str,l)) == "".join(map(str,r)):
            return 1
        else:
            return 0
