#include <iostream>
using namespace std;
 long long a[100001],i,n,t;
int main(){
    
    cin>>n;
    for(;i<n;i++){
        cin>>t;
        a[t]+=t;
    }
    for(i=2;i<=100001;i++){
        a[i]=max(a[i-1],a[i-2]+a[i]);
    }
    cout<<a[i-1];
    return 0;
}

