#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int start,int mid,int end){
    int p=start,q=mid+1;
    int i=start;
    int ar[1000001];
    for(i=start;p<=mid && q<=end ;i++){
        if(a[p]>a[q]){
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
void mergesort(int a[],int start,int end){
    if(start<end){
        int mid=(start+end)/2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
int main(){
   int a[10];
   for(int i=0;i<10;i++){
       cin>>a[i];
   }
   mergesort(a,0,9);
   for(int i=0;i<10;i++){
       cout<<a[i]<<" ";
   }
        return 0;
}