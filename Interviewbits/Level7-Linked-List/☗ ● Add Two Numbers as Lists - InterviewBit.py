#!/usr/bin/python
# -*- coding: utf-8 -*-
# *************************************** Less Optimal Solution *************************************
## Definition for singly-linked list.
## class ListNode:
##    def __init__(self, x):
##        self.val = x
##        self.next = None

# def findNo(listHead):
# ....# Find the length
# ....p=listHead
# ....number=0
# ....l=0
# ....while p!=None:
# ........number+=(10**(l))*p.val
# ........p=p.next
# ........l+=1
# ....return number

# class Solution:
#     # @param A : head node of linked list
#     # @param B : head node of linked list
#     # @return the head node in the linked list
#     def addTwoNumbers(self, A, B):
#     ....a=findNo(A)
#     ....b=findNo(B)
#     ....ans=a+b
#     ....# p=None
#     ....# make a new Linked list and return head
#     ....ans=list(str(ans))
#     ....ans=ans[::-1]
#     ....newHead=p=ListNode(ans[0])
#     ....for i in range(1,len(ans)):
#     ........newNode=ListNode(ans[i])
#     ........# Attach to current
#     ........p.next=newNode
#     ........p=p.next
#     ....return newHead
# ***************************************** Optimal Solution ************************************


class Solution:

    # @param A : head node of linked list
    # @param B : head node of linked list
    # @return the head node in the linked list

    def addTwoNumbers(self, A, B):
        p = newHead = ListNode(None)
        carry = 0
        p1 = A
        p2 = B
        while p1 != None and p2 != None:
            digit = p1.val + p2.val + carry

            # get the value of the carry and

            digit = str(digit)
            print(digit)
            if len(digit) == 2:
                carry = int(digit[0])
                digit = int(digit[1])
            else:
                carry = 0
                digit = int(digit)

            # Add it to the new Linked List

            p.next = ListNode(digit)
            p = p.next
            p1 = p1.next
            p2 = p2.next

        while p1 != None:
            digit = carry + p1.val
            digit = str(digit)
            if len(digit) == 2:
                carry = int(digit[0])
                digit = int(digit[1])
            else:
                carry = 0
                digit = int(digit)
            p.next = ListNode(digit)
            p1 = p1.next

        while p2 != None:
            digit = carry + p2.val
            digit = str(digit)
            if len(digit) == 2:
                carry = int(digit[0])
                digit = int(digit[1])
            else:
                carry = 0
                digit = int(digit)
            p.next = ListNode(digit)
            p2 = p2.next

        return newHead.next
