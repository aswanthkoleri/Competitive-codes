#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int minDim = min(n,m);
    if(minDim%2==1){
        cout<<"Akshat";
    }else{
        cout<<"Malvika";
    }
    return 0;
}
