#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    int ar[n];
    int j=0;
    for(int i=1;i<n;i++){
        int newest;
        cin>>newest;
        if(newest<=prev){
            ar[j++]=prev;
        }
        prev=newest;
    }
    ar[j++]=prev;
    cout<<j<<endl;
    for(int i=0;i<j;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
