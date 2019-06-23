#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int k,r;
    cin>>k>>r;
    int i=1;
    while((i*k)%10!=r && (i*k)%10!=0){
        i++;
    }
    cout<<i;
}
