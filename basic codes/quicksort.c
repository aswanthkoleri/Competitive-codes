#include <stdio.h>
#include <stdlib.h>

int a[100];
int n;
int partition(int p,int r){
	int x=a[r];
	int i=p-1;
	int temp;
	for(int j=p;j<=r-1;j++){

		if(a[j]<=x){
			i++;
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;
	return i+1;
}

void quicksort(int p,int r){
	if(p<r){
		int q = partition(p,r);
		quicksort(p,q-1);
		quicksort(q+1,r);
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quicksort(0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}