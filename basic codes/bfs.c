#include <stdio.h>
#include <stdlib.h>
int v,adj[100][100];
#define initial 1
#define waiting 2
#define visited 3
#define MAX 100

int state[100];
int queue[100], front = -1,rear = -1;
void insert_queue(int vertex)
{
    if(rear == MAX-1)
        printf("Queue Overflow\n");
    else
    {
        if(front == -1) 
            front = 0;
        rear = rear+1;
        queue[rear] = vertex ;
    }
}
 
int isEmpty_queue()
{
    if(front == -1 || front > rear)
        return 1;
    else
        return 0;
}
 
int delete_queue()
{
    int delete_item;
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        exit(1);
    }
    
    delete_item = queue[front];
    front = front+1;
    return delete_item;
}

void bfs(int id){
	int i;
	insert_queue(id);
	state[id]=waiting;

	while(!isEmpty_queue()){
		id=delete_queue();
		printf("%d ",id);
		state[id]=visited;
		for(i=0;i<v;i++){
			if(adj[id][i]==1 && state[i]==initial){
				insert_queue(i);
				state[i]=waiting;
			}
		}
	}
	printf("\n");
}

int main(){
	int e,v1,v2;
	scanf("%d%d",&v,&e);
	for(int i=0;i<v;i++){
		state[i]=initial;
	}
	for(int i=0;i<e;i++){
		scanf("%d%d",&v1,&v2);
		adj[v1][v2]=1;
		adj[v2][v1]=1;
	}
	bfs(0);
}