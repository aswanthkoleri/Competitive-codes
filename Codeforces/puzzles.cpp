#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int f[m];
    for(int i=0;i<m;i++){
        cin>>f[i];
    }
    sort(f,f+m);
    int min = f[n-1] - f[0];
    for(int i=1;i<=m-n;i++){
        if(f[i+n-1] - f[i] < min){
            min = f[i+n-1] - f[i];
        }
    }
    cout<<min;
  return 0;  
}