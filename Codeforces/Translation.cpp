#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int j=str1.length()-1;
    int flag=0;
    for(int i=0;i<str1.length();i++){
        if(str1[i] != str2[j]){
            flag = 1;
            break;
        }
        j--;
    }
    if(flag==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
