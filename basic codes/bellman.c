#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int v,e,graph[20][20],dist[20];
int flag=0;


void bellman(int vertex){
	for(int i=0;i<v-1;i++){
		for(int j=0;j<v;j++){
			for(int k=0;k<v;k++){
				if(graph[j][k]!=0 && dist[j]!=INT_MAX && dist[j]+graph[j][k]<dist[k]){
					dist[k]=dist[j]+graph[j][k];
				}
			}
		}
	}

	for(int j=0;j<v;j++){
			for(int k=0;k<v;k++){
				if(graph[j][k]!=0 && dist[j]!=INT_MAX && dist[j]+graph[j][k]<dist[k]){
					printf("graph contains negative weight cycle\n");
				}
			}
	}

}



int main(){
	int v1,v2,w;
	scanf("%d%d",&v,&e);
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			graph[i][j]=0;
		}
	}
	for(int i=0;i<v;i++){
		dist[i]=INT_MAX;
	}
	for(int i=0;i<e;i++){
		scanf("%d%d%d",&v1,&v2,&w);
		graph[v1][v2]=w;
		graph[v2][v1]=w;
	}
	dist[0]=0;
	bellman(0);
	for(int i=0;i<v;i++){
		printf("%d - %d\n",i,dist[i]);
	}
}