#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    int k;
    cin>>n>>k;
    int count =0;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        if(5-no >= k){
            count++;
        }
    }
        cout<<count/3;
}
