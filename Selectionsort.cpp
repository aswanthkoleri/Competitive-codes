#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int t = *a;
    *a=*b;
    *b=t;
}
int main(){
    int i,j;
    int n;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    int min=0;
    for(i=0;i<n-1;i++){
        min = ar[i];
        for(j=i+1;j<n;j++){
            if(ar[j]<min){
                min=ar[j];
                swap(&ar[j],&ar[i]);
            }
        }
    }
    for(i=0;i<n;i++)
    cout<<ar[i]<<" ";
    return 0; 
}