#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int rem = 240 - t;
   int i=1;
   int p=0;
    while(rem-i*5>=0 && i<=n){
         int sum = i*5;
         rem -= sum;
         i++;
         p++;
    }
    cout<<p;
    return 0;

}
