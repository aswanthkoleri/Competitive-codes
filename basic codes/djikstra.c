#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int v,e,graph[20][20],dist[20],sptset[20];
int flag=0;
int minimum(){
	int ans;
	int min=INT_MAX;
	ans=-1;
	for(int i=0;i<v;i++){
		if(sptset[i]==0 && min>dist[i]){
			min=dist[i];
			ans=i;
		}
	}
	sptset[ans]=1;
	flag=0;
	return ans;
}

void djikstra(int vertex){
	// printf("hii\n");
	for(int i=0;i<v-1;i++){
		int id = minimum();
		sptset[id]=1;
		for(int j=0;j<v;j++){
			if(sptset[j]==0 && dist[id]!=INT_MAX && graph[id][j]!=0 && dist[id]+graph[id][j]<dist[j]){
				dist[j]=dist[id]+graph[id][j];
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
		sptset[i]=0;
	}
	for(int i=0;i<e;i++){
		scanf("%d%d%d",&v1,&v2,&w);
		graph[v1][v2]=w;
		graph[v2][v1]=w;
	}
	dist[0]=0;
	djikstra(0);
	for(int i=0;i<v;i++){
		printf("%d - %d\n",i,dist[i]);
	}
}