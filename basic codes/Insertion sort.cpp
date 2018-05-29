#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
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
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}