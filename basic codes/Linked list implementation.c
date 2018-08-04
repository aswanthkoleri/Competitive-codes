#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;/* popularity */
    int key;
    struct node *next;
};
struct node *head=NULL;
/* Insert at first  */
void insertAtFirst(int key,int data){
    struct node *link = (struct node*)malloc(sizeof(struct node*));
    link->data=data;
    link->key=key;
    link->next=head;
    head=link;
}    
void insertAtLast(int key,int data){
    struct node *link = (struct node*)malloc(sizeof(struct node*));
    link->data=data;
    link->key=key;
    if(head==NULL)
    {
        link->next=NULL;
        head=link;
        
        
    }
    else{
    struct node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=link;
    link->next=NULL;
   
    }
}
void printList(){
    struct node *p = head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
/* TO find a node based on key */
struct node *findNode(int key)
{
    struct node *p = head ;
    if(head==NULL)
    {
        return NULL;
    }
    else{
        while(p!=NULL)
        {
            if(p->key==key)
            {
                return p;
            }
        p=p->next;
        }
    }
    return NULL;
}
/* Delete node */
void deleteNode(struct node *del)
{    
    if(head==NULL)
    {
 
    }
    else{
        /* first node */
        if(head==del)
        {
            head = del->next;  
        }
        else{
        /* Middle node */
        struct node *p=head;
        while(p->next!=del)
           p=p->next;
        p->next=del->next;/* Bypass */
        }   
    } 
}
void insertAtPos(int pos,int key,int data){
        struct node* newNode=(struct node*)malloc(sizeof(struct node*));
        newNode->data=data;
        newNode->key=key;
        struct node* p = head;
        if(pos==1){
            newNode->next=head;
            head=newNode;
        }
        else{
            struct node* temp;
            while(pos>1&&p!=NULL)
            {
                pos--;
                temp = p;
                p=p->next;
            }
            if(pos>1)
            {
                printf("Position out of range");
            }
            else{
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
}
/* Print list in reverse */
void printReverse(struct node *head){
    if(head==NULL){
        return;
    }
    printReverse(head->next);
    printf("%d ",head->data);
}


int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int node,pos;
        printf("enter node and position : \n");
        scanf("%d %d",&node,&pos);
        insertAtPos(pos,i,node);
        printList();
        printf("\n");
        printReverse(head);
        printf("\n");
    }
}