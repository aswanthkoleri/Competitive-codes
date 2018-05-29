#include <stdio.h>
#define INF 99999
int maxV=0;
int min(int a,int b){
    return (a<b)? a:b;
}
void djikstra(int G[][100],int s){
    /* G is already converted to cost matrix here */
    int dis[maxV],vis[maxV],pred[maxV];/* Distance array, visited array and predecessor array  */
    int minDistance,minNode;/* Stores the minimum distance value  */
    for(int i=0;i<=maxV;i++){
        dis[i] = G[s][i];/* Contains the distance from starting node s to all the other vertices in the graph */
        pred[i]=s;
        vis[i]=0;
    }
    dis[s]=0;
    vis[s]=1;
    int count=1; 
    while(count<=maxV){
        minDistance=INF;
        for(int i=0;i<=maxV;i++){
            if(!vis[i]&&dis[i]<minDistance){
                minDistance=dis[i];
                minNode = i;
            }
        }
        vis[minNode]=1;/* Make the minimum distance node as visited */
        /* Now recalculate the distance  */
        for(int i=0;i<=maxV;i++){
            if(!vis[i]){
                if(dis[minNode] + G[minNode][i] < dis[i]){
                dis[i] = dis[minNode]+G[minNode][i];
                pred[i] = minNode;
                }
            }
        }
        count++;
    }
    /* Now print the distance array */
    for(int i=0;i<=maxV;i++){
        if(i!=s){
        printf("node%d = %d \n",i,dis[i]);
        printf("path : %d",i);
        int j=i;    
        while(j!=s){
            j=pred[j];
            printf("<-%d",j);
        }
        printf("\n");
        }
    }
}
void main(){
    int i,j,u,v,n,e,s,w;
    int G[100][100];
    for(j=0;j<100;j++){
        for(i=0;i<100;i++){
            G[i][j]=INF;
        }
    }
    printf("Enter the number of Edges:");
    scanf("%d",&e);
    printf("\nEnter the Edges and weight:");
    for(i=0;i<e;i++){
        scanf("%d %d %d",&u,&v,&w);
        if(u>maxV)
            maxV=u;
        if(v>maxV)
            maxV=v;
        G[u][v]=w;
        G[v][u]=w;
        G[v][v]=0;
        G[u][u]=0;
    }
    printf("Enter The Starting Point:\n");
    scanf("%d",&s);
    djikstra(G,s);
}