#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;/* popularity */
/* Index */
    struct node *next;
};

struct node *head=NULL;
struct node *current=NULL;

/* Insert at first  */
/* void insertAtFirst(int data){
    struct node *link = (struct node*)malloc(sizeof(struct node*));
    link->data=data;
    
    link->next=head;
    head=link;
} */

void insertAtLast(int data){
    struct node *link = (struct node*)malloc(sizeof(struct node*));
    link->data=data;
    
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
void printList(struct node* head){
    if(head==NULL){
    
    }
    printList(head->next);
    printf("%d",head->data);
}
/* struct node *findNode(int key)
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
 */
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
int main(){
    int t,n,k;
    scanf("%d",&t);
        while(t--)
        {
            head=NULL;
            current=NULL;
            scanf("%d%d",&n,&k);
        
            /* Enter popularity */
            int p;
            for(int i=0;i<n;i++)
            {
                scanf("%d",&p);
                if(head==NULL)
                {
                    struct node* ptr=(struct node*)malloc(sizeof(struct node*));
                    ptr->data=p;
                    ptr->next=NULL;
                    head=ptr;
                    current=head;
                }
                else{
                    if(p>current->data && k!=0)
                    {
                        current->data = p;   
                        k--;
                    }
                    else{
                        struct node* ptr=(struct node*)malloc(sizeof(struct node*));
                        ptr->data=p;
                        current->next=ptr;
                        ptr->next=NULL;
                        current=ptr;
                    }
                }
            }
            current=head;
            while(k!=0 )
            {
                int flag=0;
                while(current->next != NULL)
                {
                    if(current->data<current->next->data)
                    {
                        deleteNode(current);
                        k--;
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    deleteNode(current);
                    k--;
                }
                current = current->next;
            }
           
            /* implement question algorithm  */
            /* for(int j=0;j<k;j++)
            {
            int deleteFriend = 0;
            struct node *ptr = head;
            while(ptr->next != NULL)
            {
               
                if(ptr->data < ptr->next->data)
                {
               deleteNode(ptr);
                    deleteFriend=1;
                    break;
                }
                ptr=ptr->next;
            }
            if(deleteFriend==0)
            {
             deleteNode(ptr);
            } */
         /* print */
            printList(head);
            printf("\n");
        }
           
}
    