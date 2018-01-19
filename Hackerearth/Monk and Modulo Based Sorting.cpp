#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int start,int mid,int end,int k){
    int p=start,q=mid+1;
    int i=start;
    int ar[1000001];
    for(i=start;p<=mid && q<=end ;i++){
        if(a[p]%k>a[q]%k){
            ar[i]=a[q++];
        }
        else{
            ar[i]=a[p++];
        }
    }

    while(p<=mid){
        ar[i++]=a[p++];
    }

    while(q<=end){
        ar[i++]=a[q++];
    }
    for(i=start;i<=end;i++){
        a[i]=ar[i];
    }
}
void mergesort(int a[],int start,int end,int k){
    if(start<end){
        int mid=(start+end)/2;
        mergesort(a,start,mid,k);
        mergesort(a,mid+1,end,k);
        merge(a,start,mid,end,k);
    }
}
int main(){
   int n,k;
   cin>>n>>k;
   int a[n];
   
for(int i=0;i<n;i++){
    cin>>a[i];
}
mergesort(a,0,n-1,k);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
        return 0;
}