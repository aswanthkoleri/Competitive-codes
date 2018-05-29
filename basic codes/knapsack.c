#include <stdio.h>
#include <stdlib.h>

int main(){
	scanf("%d%d",&weight,&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&v[i],&w[i])
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<weight+1;j++){
			mat[i][j]=0;
		}
	}

	for(int i=0;i<n;i++){
		int temp=weight;
		for(int j=1;j<weight+1;j++){
			if(w[i]<=weight){
				mat[i][j]=v[i];
			}

		}
	}

}