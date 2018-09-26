#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int result=-1;
        for(int i=str.size()-1;i>=0;i--){
            if(str[i]=='1'){
                result=i;
                break;
            }
        }
        cout<<result<<endl;
    }
}