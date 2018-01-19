#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionsort(int ar[],int n){
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int key;
    int j=0;
    for(int i=1;i<n;i++){
        key=ar[i];
        j=i-1;
        while(j>-1 && key<ar[j]){
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=key;
    }
   
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int e[n],o[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            e[even++]=ar[i];
        }
        else{
            o[odd++]=ar[i];
        }
    }
    insertionsort(e,even);
    insertionsort(o,odd);
    int sum=0;
    for(int i=0;i<even;i++){
        cout<<e[i]<<" ";
        sum=sum+e[i];
    }
    cout<<sum<<" ";

    sum=0;
    for(int i=0;i<odd;i++){
        cout<<o[i]<<" ";
        sum=sum+o[i];
    }
    cout<<sum<<" ";
    return 0;
}