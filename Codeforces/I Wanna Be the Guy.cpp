#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    int ar1[p];
    for(int i=0;i<p;i++){
        cin>>ar1[i];
    }
    int q;
    cin>>q;
    int ar2[q];
    for(int i=0;i<q;i++){
        cin>>ar2[i];
    }

    int flag=0;
    for(int i=1;i<=n;i++){
        flag = 0;
        for(int j=0;j<p;j++){
            if(ar1[j]==i){
                flag=1;
                break;
            }
        }
        for(int j=0;j<q;j++){
            if(ar2[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            break;
        }
    }
    if(flag==0){
        cout<<"Oh, my keyboard!";
    }
    else{
        cout<<"I become the guy.";
    }
    return 0;
}
