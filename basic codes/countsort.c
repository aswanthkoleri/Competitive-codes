#include <stdio.h>
#include <stdlib.h>

int a[100],b[100],c[100],k,n;

void countsort(){
	int i=0;
	for(i=0;i<=k;i++){
		c[k]=0;
	}
	for(i=0;i<n;i++){
		c[a[i]]++;
	}
	int index=0;
	for(i=0;i<=k;i++){
		while(c[i]>0){
			b[index]=i;
			index++;
			c[i]--;
		}
	}
}
int main(){
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	countsort();
	for(int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}
