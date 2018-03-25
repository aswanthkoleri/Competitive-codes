#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n],v[n],t[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>p[i]>>v[i]>>t[i];
        if(p[i]+v[i]+t[i] >=2 )
        {
        count++;
        }
    }
    cout<<count;
}