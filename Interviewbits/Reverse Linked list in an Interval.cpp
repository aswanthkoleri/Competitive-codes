
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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* reverseList(ListNode* A) {
    ListNode *current,*prev,*next;
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

ListNode* reverseListInterval(ListNode* A,int m, int n){
    int i=0;
    ListNode *p=A;
    ListNode *prev=A;
    while(i<m){
        prev=p;
        p=p->next;
        i++;
    }
    ListNode* first=p;
    i=0;
    p=A;
    while(i<n){
        p=p->next;
        i++;
    }
    
    ListNode* last=p;
    ListNode* temp=last->next;
    last->next=NULL;
    first=reverseList(first);
    if(prev!=A){
        prev->next=first;
    }else{
        A=first;
    }
    p=first;
    while(p->next){
        p=p->next;
    }
    p->next=temp;
    return A;
}
int len(ListNode* A){
    int i=0;
    ListNode* p=A;
    while(p){
        i++;
        p=p->next;
    }
    return i;
}

ListNode* reverseListResult(ListNode* A, int B) {
    int n=len(A);
    for(int i=0;i<n-B+1;i+=B)
    A=reverseListInterval(A,i,i+(B-1));
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
    A=reverseListResult(A,k);
    printList(A);
}