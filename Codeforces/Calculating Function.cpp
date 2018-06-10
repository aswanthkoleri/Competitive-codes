#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    long long int count=0;
    cin>>n;
    if(n%2){
        cout<< ((n-1)/2) - n;
    }else{
        cout<<n/2;
    }
    return 0;
}
