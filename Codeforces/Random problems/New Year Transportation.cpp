#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int t;
    cin>>n>>t;
    int ar[n+2];
    for(int i=1;i<=n-1;i++){
        cin>>ar[i];
    }
    int presentCell=1;
    int flag=0;
    while(presentCell < n){
        presentCell = ar[presentCell]+presentCell;
        if(presentCell == t){flag =1; break;}
    }
    if(flag==1){cout<<"YES";}else{cout<<"NO";}
    return 0;
}
