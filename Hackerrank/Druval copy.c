#include <stdio.h>
#include <limits.h>
#define INF INT_MAX
int maxV=0;
struct vertex{
    int weight;
    int parent;
};

void prim(int G[][100],struct vertex *V,int *spSet){

    int step = 0,flag = 0;
    while(1){
        for(int i=0;i <= maxV;i++){
            if(spSet[i] == 1){
                flag = 1;
                break;
            }
        }
        if(flag == 0){ break; }
        int min=INF;
        int minNode;
        for(int i=0;i<=maxV;i++){
            if(V[i].weight < min ){
                min  = V[i].weight;
                minNode = i;
            }
        }
        spSet[minNode]=step++; 
        printf("spSet[%d] = %d\n",minNode,spSet[minNode]);
        for(int i=0;i<=maxV;i++){
            if(spSet[i] != -1 && G[minNode][i]!= INF){
                if(V[i].weight > G[minNode][i]){
                    V[i].weight = G[minNode][i];
                    V[i].parent = minNode;
                }
            }
        }
        flag = 0;
    }
}
void main(){
    int i,j,u,v,n,e,s,w;
    
    struct vertex V[100];
    int G[100][100];
    for(i=0;i<100;i++){
        for(j=0;j<100;j++){
            G[i][j]=INF;
    }}
    printf("Enter the number of Edges:");
    scanf("%d",&e);
    printf("\nEnter the Edges and weight:");
    for(i=0;i<e;i++){
        scanf("%d %d %d",&u,&v,&w);
        if(u>maxV)
            maxV=u;
        if(v>maxV)
            maxV=v;
        G[u][u]=0;
        G[v][v]=0;
        G[u][v]=w;
        G[v][u]=w;
    }
    int spSet[maxV+1];
    for(int i=0;i<=maxV;i++){
        spSet[i]=-1;
    }
    V[0].weight = 0;
    V[0].parent = -1;
    for(i = 1;i <= maxV;i++){
        V[i].weight = INF;
        V[i].parent = -1;
    }
    printf("The initial graph\n");
    for(int i=0;i<=maxV;i++){
        for(int j=0;j<=maxV;j++){
            if(G[i][j]==INF){
                printf("INF ");
            }else{
            printf("%d ",G[i][j]);
            }
            printf("\n");
        }
    }  
    printf("\n");
    prim(G,V,spSet);
    for(int i=0;i <= maxV;i++){
        if(spSet[i] == i)
            printf("%d  ",spSet[i]);
    }

}