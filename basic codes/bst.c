#include <stdio.h>
#include <stdlib.h>
int found = 0;
struct node{
	int key;
	struct node *left;
	struct node *right;
	int parent;
} *root;

struct node * getnode(int val){
	struct node * var = (struct node *)malloc(sizeof(struct node));
	var->key = val;
    var->left = NULL;
    var->right = NULL;
    return var;
}

struct node *insert(struct node *root1,int val){
	struct node *temp=root1;
	if(temp==NULL){
		temp = getnode(val);
		// printf("create root node\n");
		return temp;
	}
	while(1){
		if(val>temp->key){
			if(temp->right==NULL){
				// printf("next is null so creating a node in the right\n");
				temp->right=getnode(val);
				return root1;
			}
			temp = temp->right;
			// printf("moving to the next right node\n");
		}
		else{
			if(temp->left==NULL){
				// printf("next is null so creating a node in the left\n");
				temp->left=getnode(val);
				return root1;
			}
			temp = temp->left;
			// printf("moving to the next left node\n");
		}
	}
	
}

void inorder(struct node *root1){
	if(root1!=NULL){
		inorder(root1->left);
		printf("%d ",root1->key);
		inorder(root1->right);
	}
}

struct node *search(struct node *root1,int key){
	if(root1!=NULL){
		if(key>root1->key){
			// printf("%d going to the right\n",root1->key);
			return search(root1->right,key);
		}
		else if(key<root1->key){
			// printf("%d going to the left\n",root1->key);
			return search(root1->left,key);
		}
		else{
			printf("found\n");
			found=1;
			return root1;
		}
	}
}

void insertnode(struct node *root1,struct node *new){
	while(1){
		if(root1->key<new->key){
			if(root1->right!=NULL){
				root1=root1->right;
			}
			else{
				root1->right=new;
				break;
			}
		}
		else{
			if(root1->left!=NULL){
				root1=root1->left;
			}
			else{
				root1->left=new;
				break;
			}
		}
	}
}

int main(){
	int n,val;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&val);
		root=insert(root,val);
	}
	// struct node *temp=root;
	// inorder(temp);
	// struct node *searchitem=root;
	// searchitem=search(searchitem,8);
	// if(found==1){
	// 	printf("\n%d\n",searchitem->key);
	// }
	// else{
	// 	printf("Not Found");
	// }
	struct node *newnode = getnode(19);
	struct node *temp=root;
	insertnode(root,newnode);
	inorder(temp);
	
}