#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    int t;
    cin>>n>>t;
    int ar[102];
    if(t==10){
        if(n>=2){
            ar[0]=1;
            for(int i=1;i<n;i++){
                ar[i]=0;
            }
        }else{
            cout<<-1;
            return 0;
        }
    }else{
    for(int i=0;i<n;i++){
        ar[i]=t;
    }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i];
    }
    return 0;
}
