#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int ar[str.length()/2 + 1 ];
    int itr=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>=48 && str[i] <=57){
            ar[itr++] = str[i]-48;
        }
    }
    sort(ar,ar+itr);
    for(int i=0;i<itr-1;i++){
        cout<<ar[i]<<"+";
    }
    cout<<ar[itr-1];
    return 0;
}
