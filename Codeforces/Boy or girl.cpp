#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    cin>>str;
   int count=0;
    for(int i=0;i<str.length();i++){
        int flag = 0 ;
        for(int j=i-1;j>=0;j--){
            if(str[i]==str[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
