#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ar[i][j]=2;
        }
    }
    int minDim = min(n,m);
    for(int i=0;i<minDim;i++){
        for(int j=i;j<n;j++){
            ar[j][i]--;       
        }
        for(int j=i;j<n;j++){
            ar[i][j]--;       
        }

    }
}
