#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long int step=0;
    while(n){
        if(n/5){
            step+=(n/5);
            n=n%5;
        }else if(n/4){
            step+=(n/4);
            n=n%4;
        }else if(n/3){
            step+=(n/3);
            n=n%3;
        }else if(n/2){
            step+=(n/2);
            n=n%2;
        }else if(n/1){
            step+=(n/1);
            n=n%1;
        }
    }
    cout<<step;
}
