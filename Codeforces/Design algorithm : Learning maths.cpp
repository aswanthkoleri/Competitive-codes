#include <bits/stdc++.h>
int isNotPrime(int a){
    int flag =0;
    
    for(int i=a-1;i>=2;i--){
        if(a%i == 0){
            flag=1;
            break;
        }
    }
    if(a == 1) {
        flag = 1;
    }
    return flag;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag=0;
    for(int i=4;i<=n;i++){
        if(isNotPrime(i) && isNotPrime(n-i)){
            cout<<i<<" "<<n-i;
            break;
        }
    }
    return 0;
}
