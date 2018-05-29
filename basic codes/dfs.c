#include <stdio.h>
#include <stdlib.h>
#define N 10

struct node{
	int value;
	int visited;
	struct node *next;
} *list[N];


struct node * getnode(int val){
	struct node * var = (struct node *)malloc(sizeof(struct node));
	var->value = val;
    var->visited = 0;
    var->next = NULL;
    return var;
}

struct node *insert(struct node *root1,int val,int start){
	struct node *temp=root1;
	if(temp==NULL){
		temp = getnode(start);
		temp->next=getnode(val);
		return temp;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=getnode(val);
	return root1;
}

void dfs(int id,int parent,int level,int dis[],int par[]){
	printf("%d\n",id);
	struct node *temp=list[id];
	if(temp->visited==1){
		return;
	}
	dis[id]=level;
	par[id]=parent;
	temp->visited=1;
	while(temp!=NULL){
		int it = temp->value;
		if(temp->visited==1){
			temp=temp->next;
			continue;
		}

		dfs(it,id,level+1,dis,par);
		temp=temp->next;
	}
}

int main(){
	int v,e,v1,v2;
	int dis[100],par[100];
	scanf("%d",&v);
	scanf("%d",&e);
	for(int i=0;i<e;i++){
		scanf("%d%d",&v1,&v2);
		list[v1]=insert(list[v1],v2,v1);
		list[v2]=insert(list[v2],v1,v2);
	}

	for(int i=0;i<v;i++){
		struct node *temp=list[i];
		while(temp!=NULL){
			printf("%d -> ",temp->value);
			temp=temp->next;
		}
		printf("\n");
	}
	dfs(0,0,0,dis,par);
	printf("length\n");
	for(int i=0;i<v;i++){
		printf("%d\n",dis[i]);
	}
}