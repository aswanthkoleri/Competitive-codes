#include<bits/stdc++.h>
using namespace std;
int main(){
    int track=0;
    int change=0;
    int yes=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='h'){
            track=i;
            change=1;
            break;
        }
    }
    if(change){
        change=0;
    for(int i=track+1;i<s.size();i++){
        if(s[i] == 'e'){
            track=i;
            change=1;
            break;
        }
    }}
    if(change){
        change=0;
    
    for(int i=track+1;i<s.size();i++){
        if(s[i] == 'l'){
            track=i;
            change=1;
            break;
        }
    }}
    if(change){
        change=0;
    for(int i=track+1;i<s.size();i++){
        if(s[i] == 'l'){
            track=i;
            change=1;
            break;
        }
    }}
    if(change){
        change=0;
    for(int i=track+1;i<s.size();i++){
        if(s[i] == 'o'){
            track=i;
            change=1;
            yes = 1;
            break;
        }
    }}
    if(yes==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}