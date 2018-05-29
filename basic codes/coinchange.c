#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int count=0;
int array[100],n;

int coinchange(int index,int cost){
	if(cost==0){
		return 1;
	}
	if(cost<0){
		return 0;
	}

	if (index <=0 && cost >= 1)
        return 0;

	return coinchange(index-1,cost)+coinchange(index,cost-array[index-1])	;
}

int main(){
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}

	int cost=coinchange(n,10);

	printf("%d\n",cost);
}