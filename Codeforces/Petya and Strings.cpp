#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    char str1[101],str2[101];
    cin>>str1>>str2;
    for(int i = 0;i<strlen(str1);i++){
        if(str1[i] >= 65 && str1[i] <=90 ){
            str1[i]+=32;
        }
    }
    for(int i = 0;i<strlen(str2);i++){
        if(str2[i] >= 65 && str2[i] <=90 ){
            str2[i]+=32;
        }
    }
    int ret= strcmp(str1,str2);
    if(ret<0){
        cout<<-1;
    }
    else if(ret > 0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
