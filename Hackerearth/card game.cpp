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
    int m,n;
    int dollar=0;
        cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int ar[m];
for(int i=0;i<m;i++){
        cin>>ar[i];
    }
    int count;
    for(int i=0;i<n;i++){
         count=0;  
        for(int j=0;j<m;j++){
                 
            if(a[i]<=ar[j]){
                dollar=dollar+ar[j]-a[i]+1;
                count=count+ar[j]-a[i]+1;
                a[i]=a[i]+count;
            }
        }
    }
    cout<<dollar;

        
        return 0;
}