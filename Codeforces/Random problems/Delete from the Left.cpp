#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    string s,t;
    cin>>s>>t;
    int i=s.length();
    int j=t.length();
    int count =0;
    while(s[i]==t[j] && i>=0 && j>=0){
        count++;
        i--;
        j--;
    }
    cout<<i+j+2;
    return 0;
}
