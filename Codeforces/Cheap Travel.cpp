#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,price1,price2;
    cin>>n>>m>>a>>b;
    price1=n*a;
    if(b/m < a && a <= b){
        price1 = (n/m)*b + (n%m)*a; 
    }
    else if(b/m < a && b < a){
        price1 = (n/m)*b + ((n%m)? b : 0)  ; 
    }
    if(n<m && b<a*n){
        price1=b;
    }
    cout<<price1;
    return 0;
}
