#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int coord[n][3];
    for(int i=0;i<n;i++){
            cin>>coord[i][0]>>coord[i][1]>>coord[i][2];
    }
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        x+=coord[i][0];
        y+=coord[i][1];
        z+=coord[i][2];
    }
    if(x==0 && y ==0 && z==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
        return 0;
    }

