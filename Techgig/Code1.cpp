
#include<bits/stdc++.h>
using namespace std;
const long long mod = 10e9+7;
int main(){
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        ar.push_back(k);
    }
// Main logic
long long total=0;
for(int i=0;i<n;i++){
    total+=ar[i];
}
long long sum=0;
long long sub=0;
for(int i=0;i<n;i++){
    sub+=ar[i];
    sum+=((i+1)*(ar[i]*ar[i]) + (i+1)*ar[i]*(total-sub));
}
cout<<sum%mod<<endl;
    return 0;
}