#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,count=0;
    cin>>n;
    int digit;
    while(n){
        digit=n%10;
        
        if(digit == 4 || digit == 7){
            count++;
        }
        n=n/10;
    }
    
    if(count == 4 || count == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
}
