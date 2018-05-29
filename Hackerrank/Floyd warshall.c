#include <stdio.h>
#define INF 99999
int maxV=0;
int dist[100][100];
void floyd(int G[][100]){
    /* Create a distance matrix  */
    for(int i=0;i<=maxV;i++){
        for(int j=0;j<=maxV;j++){
            dist[i][j]=G[i][j];
        }
    }
    /* Now find the distance matrix with the least amount distances between vertices */
    int i,j,k;
    for(k=0;k<=maxV;k++){
        for(i=0;i<=maxV;i++){
            for(j=0;j<=maxV;j++){
                if(dist[i][k]+dist[k][j]<dist[i][j]){
                    dist[i][j] = dist[i][k]+dist[k][j];
                }
            }
        }
    }

}
void main()
{
    int i,j,u,v,n,e,s,w;
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
    }
    printf("The initial graph\n");
    for(int i=0;i<=maxV;i++){
        for(int j=0;j<=maxV;j++){
            if(G[i][j]==INF){
                printf("INF ");
            }else{
            printf("%d ",G[i][j]);
            }
        }   
        printf("\n");
    }
    floyd(G);
    
    printf("The shortest distance matrix");
    printf("\n");
    for(int i=0;i<=maxV;i++){
        for(int j=0;j<=maxV;j++){
            if(dist[i][j]==INF){
                printf("INF ");
            }else{
            printf("%d ",dist[i][j]);
            }
        }
        printf("\n");
    }
}
