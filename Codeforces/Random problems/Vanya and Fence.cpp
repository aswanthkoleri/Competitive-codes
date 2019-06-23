#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int h;
    cin>>n>>h;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int minWidth=0;
    for(int i=0;i<n;i++){
        if(ar[i]>h){
            minWidth+=2;
        }
        else{
            minWidth++;
        }
    }
    cout<<minWidth;
    return 0;
}
