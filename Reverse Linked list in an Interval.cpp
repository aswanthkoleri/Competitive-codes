
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



struct ListNode
{
	int val;
	ListNode* next;
};

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
    while(i<m){
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
ListNode* reverseList(ListNode* A, int B) {
	int n=len(A);
    for(int i=0;i<n;i+=B){
    	A=reverseListInterval(A,i,i+(B-1));
    }
    return A;
}

ListNode* insertNode(ListNode* A,int val){
	ListNode* p=A;
	ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
	if(p==NULL){
		newNode->val=val;
		newNode->next=p;
		p=newNode;
		return A;
	}
	
	while(p->next){
		p=p->next;
	}
	newNode->val=val;
	newNode->next=p->next;
	p->next=newNode;
	return A;
}
void printList(ListNode* A){
	ListNode* p=A;
	while(p){
		cout<<p->val<<" ";
		p=p->next;
	}
	cout<<endl;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	cout<<"Hello";
	ListNode* A=NULL;
    insertNode(A,1);
    insertNode(A,2);
    insertNode(A,3);
    insertNode(A,4);
    insertNode(A,5);
    insertNode(A,6);
    printList(A);
}