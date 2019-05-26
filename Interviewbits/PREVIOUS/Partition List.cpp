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


ListNode* partition(ListNode* A, int B) {
	ListNode *prev=A,*p=A,*next;
    ListNode *head=NULL;
    int flag=0;
    ListNode* last=head;
    while(p){
        /*cout<<"r";*/
        if(p->val>B){
            next=p->next;
            if(prev==A && flag==0){
                prev=next;
            }
            else{
                prev->next=next;
            }
            p->next=NULL;
            if(head==NULL){
                head=p;
                last=p;
            }else{
                last->next=p;
                last=p;
            }
            p=next;
        }else{
        flag=1;
        prev=p;
        p=p->next;
        }
    }
    /*printList(A);
    printList(head);*/
    if(flag!=0)
    prev->next=head;
	else
	prev=head;
    /*printList(A);*/
    /*ListNode* result=mergeList(A,head);*/
    return A;
}
int main(){
	
	
		#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
		#endif

	
	ListNode* A=NULL;
    A=insertNode(A,1);
    int k=3;
    A=partition(A,k);
    printList(A);
}