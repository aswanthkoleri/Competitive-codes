#include <stdio.h>
int heapsize;
void swap(long long int *a,long long int *b){
    long long int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(long long int i,long long  int *heap,long long int *temp){
	long long int l=2*i;
	long long int r=2*i+1;
	long long int maxid=i;
	long long int max=heap[i];
    long long int max1=temp[i];
	if(l<=heapsize && heap[l]>max){
		maxid=l;
		max=heap[l];
        max1=temp[l];

	}
	if(r<=heapsize && heap[r]>max){
		maxid=r;
		max=heap[r];
        max1=temp[r];
	}
	if(maxid!=i){
		heap[maxid]=heap[i];
		heap[i]=max;
        temp[maxid]=temp[i];
		temp[i]=max1;
		heapify(maxid,heap,temp);
	}
}

void heapsort(long long int *heap,long long int *temp){
	while(heapsize!=1){
		int temp1=heap[1];
		int temp2 = temp[1];
        temp[1]=temp[heapsize];
		heap[1]=heap[heapsize];
		heap[heapsize]=temp1;
        temp[heapsize]=temp2;
		heapsize--;
		heapify(1,heap,temp);
	}
}

int main(){
    long long int n,k;
    /* cin>>n>>k; */
    scanf("%l64d %l64d",&n,&k);
    heapsize=n;
    long long int p[n];
    long long int c[n];
    long long int i;
    for( i=1;i<=n;i++){
        /* cin>>p[i]; */
        scanf("%l64d",&p[i]);
    }
    for( i=1;i<=n;i++){
        /* cin>>c[i]; */
        scanf("%l64d",&c[i]);
    }
    long long int temp[n],temp1[n];
    for( i=1;i<=n;i++){
        temp[i]=p[i];
    }
    
    for( i=1;i<=n;i++){
        temp1[i]=c[i];
    }
    /* for(long long int i=0;i<=n-1;i++){
        for(long long int j=0;j<=n-i-1;j++){
            if(c[j]<c[j+1]){
                swap(&c[j],&c[j+1]);
                swap(&temp[j],&temp[j+1]);
            }
        }
    } */
    for(int i=heapsize/2;i>0;i--){
		heapify(i,c,temp);
	}
    heapsort(c,temp);
   /*  for(long long int i=1;i<=n;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    for(long long int i=1;i<=n;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl; */
    long long int j;
        for( i=1;i<=n;i++){
            long long int count=0,sum=temp1[i];
            for( j=n;j>=1 && count <k ;j--){
                if(p[i] > temp[j] ) {
                    sum+=c[j];
                    count++;
                }
            }
           printf("%l64d ",sum);
        }
   
    return 0;
}
