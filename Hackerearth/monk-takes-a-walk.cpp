#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main(){
    int t;
    char s[100001];
    cin>>t;
    while(t--){
        cin>>s;
        int c=0;
        for(int i=0;i<strlen(s);i++){
            switch(s[i]){
                case 'A' : c++;
                break;
                case 'E' : c++;
                break;
                case 'I' : c++;
                break;
                case 'O' : c++;
                break;
                case 'U' : c++;
                break;
                case 'a' : c++;
                break;
                case 'e' : c++;
                break;
                case 'i' : c++;
                break;
                case 'o' : c++;
                break;
                case 'u' : c++;
                break;
            }
        }
        cout<<c<<endl;
    }
return 0;
}