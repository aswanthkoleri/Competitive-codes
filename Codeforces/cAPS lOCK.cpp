#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i]<65 || s[i] > 90 ){
            cout<<s<<endl;
            return 0;
        }
    }
    /* conversion begins  */
        
        for(int i=0;i<=s.size();i++){
            if(i==0 && s[i]>=97 && s[i]<=122){
            s[i]=s[i]-32;
        }else{
            s[i]=s[i]+32;}
        }
        cout<<s<<endl;
    return 0;
    }
