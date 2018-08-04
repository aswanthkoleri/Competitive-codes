#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i] == '0'){
            count++;
        }
        else{
            count=0;
        }
    if(count == 7 ){
        cout<<"YES";
        return 0;
    }
    }
    
    
    count = 0 ;
    for(int i=0;i<str.length();i++){
        if(str[i] == '1'){
            count++;
        }
        else{
            count=0;
        }
        if(count == 7 ){
        cout<<"YES";
        return 0;
    }
    }
    
    cout<<"NO";
    return 0;
}