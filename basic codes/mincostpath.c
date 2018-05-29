#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int mat[10][10],n,m;

int min(int x,int y,int z){
	if(x<y){
		if(x<z){
			return x;
		}
		else{
			return z;
		}
	}
	else if(y<x){
		if(y<z){
			return y;
		}
		else{
			return z;
		}
	}
}

int cost(int x,int y){

	if(x-1<0 && y-1<0){
		return mat[x][y];
	}
	else if(x-1<0){
		return cost(x,y-1)+mat[x][y];
	}
	else if(y-1<0){
		return cost(x-1,y)+mat[x][y];
	}
	else{
		return min(cost(x,y-1),cost(x-1,y-1),cost(x-1,y))+mat[x][y];
	}
}


int main()
{
   scanf("%d%d",&n,&m);
   for(int i=0;i<n;i++){
   	for(int j=0;j<m;j++){
   		scanf("%d",&mat[i][j]);
   	}
   }
   printf(" %d ", cost(2,2));
   return 0;
}