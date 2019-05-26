
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 struct ListNode {
      int val;
      ListNode *next;
  };
ListNode* reverseBetween(ListNode* head,int m,int n){
	int i=0;
	ListNode* p1=head;
	while(i<m && p1){
		p1=p1>next;
		i++;
	}
	int i=0;
	ListNode* p2=head;
	while(i<n && p1){
		p1=p1>next;
		i++;
	}

}
ListNode* reverseList(ListNode* A, int B) {
    int i=0;
    if(B==1){
        return A;
    }
    ListNode* p=A;
    ListNode* start=A;
    vector<ListNode*> res;
    while(p){
        res.push_back(p);
        i++;
        if(i==B){
            i=0;
            while(start==p->next){
                start=res.back();
                start=start->next;
            }
        }
        p=p->next;
    }
    return A;
}

ListNode* pushNode(ListNode* head,int newValue){
	ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
	newNode->val=newValue;
	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
		
	}
	else{
		ListNode* last= head;
		while(last->next){
			last=last->next;
		}
		last->next=newNode;
	}
	return head;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int n;
    cin>>n;
    ListNode* head=NULL;
    for(int i=0;i<n;i++){
    int k;
    cin>>k;
    head=pushNode(head,k);
	}	
	head=reverseList(head,2);
    ListNode* p=head;
    while(p){
    	cout<<p->val<<" ";
    	p=p->next;
    }
    return 0;
}
