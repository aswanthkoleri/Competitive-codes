#include <stdio.h>
#include <stdlib.h>
int heap[21];
int temp[]
int heapsize;
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

void heapsort(){
	while(heapsize!=1){
		int temp=heap[1];
		
		heap[1]=heap[heapsize];
		heap[heapsize]=temp;
		heapsize--;
		heapify(1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	heapsize=n;
	for(int i=1;i<=n;i++){
		scanf("%d",&heap[i]);
	}
	for(int i=heapsize/2;i>0;i--){
		heapify(i);
	}
	for(int i=1;i<=n;i++){
		printf("%d ",heap[i]);
	}
	printf("\n");
	heapsort();
	for(int i=1;i<=n;i++){
		printf("%d ",heap[i]);
	}
}