#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int heap[21];
int heapsize;

int maximum(){
	return heap[1];
}

void heapify(int i){
	int l=2*i;
	int r=2*i+1;
	int maxid=i;
	int max=heap[i];
	if(l<=heapsize && heap[l]>max){
		maxid=l;
		max=heap[l];
	}
	if(r<=heapsize && heap[r]>max){
		maxid=r;
		max=heap[r];
	}
	if(maxid!=i){
		heap[maxid]=heap[i];
		heap[i]=max;
		heapify(maxid);
	}
}

int extractmax(){
	if(heapsize<1){
		printf("heap underflow");
		return 0;
	}
	int value=heap[1];
	heap[1]=heap[heapsize];
	heap[heapsize]=value;
	heapsize--;
	heapify(1);
	return value;
}

void increasekey(int i,int key){
	if(heap[i]>key){
		printf("new value should be greater");
		return;
	}

	heap[i]=key;

	while(i>1 && heap[i/2]<heap[i]){
		int temp=heap[i];
		heap[i]=heap[i/2];
		heap[i/2]=temp;
		i=i/2;
	}

}

void insertkey(int key){
	heapsize++;
	heap[heapsize]=INT_MIN;
	increasekey(heapsize,key);
}

int main(){
	scanf("%d",&heapsize);
	for(int i=1;i<=heapsize;i++){
		scanf("%d",&heap[i]);
	}
	for(int i=heapsize/2;i>0;i--){
		heapify(i);
	}
	for(int i=1;i<=heapsize;i++){
		printf("%d ",heap[i]);
	}
	printf("\n");
	insertkey(15);
	for(int i=1;i<=heapsize;i++){
		printf("%d ",heap[i]);
	}
}