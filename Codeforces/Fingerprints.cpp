#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    /* Implementation */
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
    return 0;
}
