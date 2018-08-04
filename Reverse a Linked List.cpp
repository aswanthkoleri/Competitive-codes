/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
	ListNode* current,prev,next;
	current=A;
	prev=NULL;
	while(current){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	A=prev;
	return A;
}
