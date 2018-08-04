#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int t = *a;
    *a=*b;
    *b=t;
}
int partition(int ar[],int low ,int high ){
    int i=low-1;/* smaller no index */

    int pivot = ar[high];
    if(pivot <0){
        pivot*=-1;
    }
    for(int j=low;j<high;j++){
        if(ar[j]<0){
        if((ar[j]*-1)<=pivot){
            i++;
            swap(&ar[i],&ar[j]);
        }
        }else{
            if(ar[j]<=pivot){
            i++;
            swap(&ar[i],&ar[j]);
        }
        }
    }
     swap(&ar[i+1],&ar[high]);
     return (i+1);
}
void quickSort(int ar[],int low,int high)
{
     if(low<high){

        int pi=partition(ar,low,high);
        quickSort(ar,low,pi-1);
        quickSort(ar,pi+1,high);
     }
}
int main(){
    int t;
        cin>>t;
        int ar[t];
       for(int i=0;i<t;i++){
           cin>>ar[i];
       }
       quickSort(ar,0,t-1);
       for(int i=0;i<t;i++){
           cout<<ar[i]<<" ";
       }
        return 0;
}