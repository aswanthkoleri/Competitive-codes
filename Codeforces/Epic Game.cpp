#include <bits/stdc++.h>
int gcd(int a,int b){
    int minimum;
    if(b<=a){
        minimum=b;
    }else{
        minimum=a;
    }
    int gcd;
    if(minimum == 0){
        if(a!=0){
            return a;
        }
        else{
            return b;
        }
    }
    for(int i= minimum;i>=1;i--){
        if(a%i == 0 && b%i == 0){
            gcd=i;
            break;
        }
    }
    return gcd;
}
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int p1=1;
    while(n>0){
        if(p1 == 1){
            n=n-gcd(a,n);
            p1=0;
        }else{
            n = n-gcd(b,n);
            p1 = 1;
        }
    }
    cout<<p1;
    return 0;
}
