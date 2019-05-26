#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime(int n){
    int flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(i!=n && n%i==0 ){
            flag=1;
            break;
        }
    }
    if(flag==1){
        return false;
    }
    else{
        return true;
    }
}
vector<int> primesum(int A) {
    vector<int> v;
    for(int i=2;i<=A;i++){
        /* cout<<i<<" "<<A-i;
        cout<<endl;
        cout<<isPrime(i)<<" "<<isPrime(A-i); */
        if(isPrime(i) && isPrime(A-i)){    
        v.push_back(i);
        v.push_back(A-i);
        return v;
        }
    }
}

int main(){
    int A;
    cin>>A;
    vector<int> v=primesum(A);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
