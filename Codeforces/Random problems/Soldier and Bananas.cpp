#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n,k,w;
    cin>>k>>n>>w;
    long long int sum =(w*(w+1))/2;
    long long int total = k*sum;
   
    if(total-n>0){
        cout<<total -n;
    }
    else{
        cout<<0;
    }
    return 0;
}
