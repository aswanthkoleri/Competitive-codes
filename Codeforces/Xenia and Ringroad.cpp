#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    long long int p=1;
    long long int t=0;
    long long int c;
    cin>>n>>m;
    for(long long int i=1;i<=m;i++){
        cin>>c;
        if(c>p){
            t+=c-p; 
        }
        else if(c<p){
            t+=n-p+c;
        }
           p=c;
    }
    cout<<t;
    return 0;
}
