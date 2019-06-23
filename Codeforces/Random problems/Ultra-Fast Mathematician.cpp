#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    char result[100];
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        if(a[i]==b[i]) {
            result[i] ='0';
        }else if(a[i] != b[i]){
            result[i]='1';
        }
    }
    for(int i=0;i<a.length();i++){
        cout<<result[i];
    }
    return 0;

}
