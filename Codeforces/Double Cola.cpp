#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    cin>>n;
    long int j=5;
    long int i=1;
    long int temp = n;
    long int total=5;
    while(n>total){
        j=j*2;
        total+=j;
        i=i*2;
    }
    n=n-(total-j);
    float index = (float)n/i;
    if(index<=1){
        cout<<"Sheldon";
    }
    else if(index<=2){
        cout<<"Leonard";
    }else if(index<=3){
        cout<<"Penny";
    }else if(index<=4){
        cout<<"Rajesh";
    }else if(index<=5){
        cout<<"Howard";
    }
    return 0;
}
