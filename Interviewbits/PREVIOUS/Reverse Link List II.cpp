/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct ListNode
{
	int val;
	ListNode* next;
};
void printList(ListNode* A){
    ListNode* p=A;
        while(p){
        cout<<p->val<<" ";
        p=p->next;
    }
    cout<<endl;
}

ListNode* reverseList(ListNode* A){
	ListNode *prev,*curr,*next;
	prev=NULL;
	curr=A;
	while(curr){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	return prev;
}

ListNode* reverseBetween(ListNode* A, int B, int C) {
    /*First I have to write a fucntion to reverse a linked list*/
	int i=1;
	ListNode* first;
	ListNode* p=A;
	ListNode *prev=A;
	int flag=0;
	while( i<B)	{
		prev=p;
		i++;
		p=p->next;
		flag=1;
	}
	first=p;
	
	p=A;
	i=1;
	while( i<C){
		i++;
		p=p->next;
	}
	ListNode* last=p;
		ListNode* temp=last->next;
	last->next=NULL;
	first=reverseList(first);
	
	p=first;
	while(p->next){
		p=p->next;
	}
	
	p->next=temp;
	if(flag==1){
		prev->next=first;
	}else{
		A=first;
	}
	return A;
}
ListNode* insertNode(ListNode *A,int val){
	ListNode* p=A;
	ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
    newNode->val=val;
    newNode->next=NULL;
	if(A==NULL){
		A=newNode;
		return A;
	}
	while(p->next){
		p=p->next;
	}
	p->next=newNode;
	return A;
}

int main(){
	
	ListNode* A=NULL;
    A=insertNode(A,6);
    A=insertNode(A,10);
    A=insertNode(A,0);
    A=insertNode(A,3);
    A=insertNode(A,4);
    A=insertNode(A,8);
    printList(A);
    int k=3;
    A=reverseBetween(A,2,3);

    printList(A);
}