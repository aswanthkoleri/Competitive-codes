#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    if(n>=0){
        cout<<n;
    }else{
        long long int first = n%10;
        long int second = (n/10)%10;
        if(first<=second){
            /* Remove first  */
            cout<<n/10;
        }else{
            cout<<(n/100)*10 + first;
        }
    }
    return 0;
}
