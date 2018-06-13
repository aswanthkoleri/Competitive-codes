#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s1,s2,r;
    cin>>s1>>s2>>r;
    for(int i=0;i<s1.length();i++){
        int flag=0;
        for(int j=0;j<r.length();j++){
            if(r[j]==s1[i]){
                flag=1;
                r[j]='*';
                break;
           }
        }
        if(flag==0){
            cout<<"NO";
            return 0;
        }
    }
    for(int i=0;i<s2.length();i++){
        int flag=0;
        for(int j=0;j<r.length();j++){
            if(r[j]==s2[i]){
                flag=1;
                r[j]='*';
                break;
           }
        }
        if(flag==0){
            cout<<"NO";
            return 0;
        }
    }
    /* Chekc any extra letter  */
    int flag=0;
    for(int i=0;i<r.length();i++){
        if(r[i]!='*'){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
