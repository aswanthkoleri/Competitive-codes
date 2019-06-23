#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    int a,b;
    cin>>a>>b;
    int diff=0;
    int same=0;
    diff=min(a,b);
    same=(max(a,b)-diff)/2;
    cout<<diff<<" "<<same;
}
