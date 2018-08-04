#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    long int k;
    cin>>k;
    for(int i=0;i<n;i++){
        if(ar[i]==k){
            cout<<i;
            break;
        }
    }
    return 0;
}