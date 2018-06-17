#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    float no;
    double sum =0;
    
    for(int i=0;i<n;i++){
       cin>>no;
       sum+=no;
    }
    cout<<fixed<<setprecision(6)<<sum/n;
    return 0;
    }
