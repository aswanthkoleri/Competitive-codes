/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int len(Node *head){
	int i=0;
	Node *p;
	p=head;
	while(p){
		i++;
		p=p->next;
	}
	return i;
}
int getNthFromLast(Node *head, int n)
{
       int lengthOfList=len(head);
       int nFromFirst=lengthOfList-n;
       if(nFromFirst<0){
       	return -1;
       }
       else{
       	Node *p=head;
       	int i=0;
       	while(i<nFromFirst){
       		i++;
       		p=p->next;
       	}
       	return p->data;
       }
}