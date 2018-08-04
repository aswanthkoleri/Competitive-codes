#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ar[d+1];
    for(int i=1;i<=d;i++){
        ar[i]=0;
    }
    
    for(int i=k;i<=d;i=i+k){
        ar[i]=1;
    }
    for(int i=l;i<=d;i=i+l){
        ar[i]=1;
    }
    for(int i=m;i<=d;i=i+m){
        ar[i]=1;
    }
    for(int i=n;i<=d;i=i+n){
        ar[i]=1;
    }
    int count=0;
    for(int i=1;i<=d;i=i+1){
        if(ar[i]==1){
            count++;
        }
    }
    cout<<count;
    return 0;
}
