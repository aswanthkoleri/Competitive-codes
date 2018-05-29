#include<stdio.h>
#include<stdbool.h>

int maxV=0;
int array[100];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek() {
   return array[front];
}

bool isEmpty() {
   return itemCount == 0;
}

bool isFull() {
   return itemCount == maxV;
}

int size() {
   return itemCount;
}  

void insert(int data) {

   if(!isFull()) {
	
      if(rear == maxV-1) {
         rear = -1;            
      }       

      array[++rear] = data;
      itemCount++;
   }
}

int removeData() {
   int data = array[front++];
	
   if(front == maxV) {
      front = 0;
   }
	
   itemCount--;
   return data;  
}

void BFS(int i,int G[][100],int *visited)
{
    insert(i);
    while(!isEmpty()){
    /* pop the queue */
    int ele = removeData();
    printf("%d ",ele);
    int j;
    for(j=0;j<=maxV;j++){
       if(!visited[j]&&G[ele][j]==1){
           visited[j]=1;
           insert(j);
        }
    }
    }
}

void main()
{
    int i,j,u,v,n,e,s;
    int G[100][100];
    for(j=0;j<100;j++){
        for(i=0;i<100;i++){
            G[i][j]=0;
        }
    }
    printf("Enter the number of Edges:");
    scanf("%d",&e);
    printf("\nEnter the Edges:");
    for(i=0;i<e;i++){
        scanf("%d %d",&u,&v);
        if(u>maxV)
            maxV=u;
        if(v>maxV)
            maxV=v;
        G[u][v]=1;
        G[v][u]=1;
    }
    int visited[100]={0};
    printf("Enter The Starting Point:\n");
    scanf("%d",&s);
    visited[s]=1;
    BFS(s,G,visited);
}