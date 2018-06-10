#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int flag=0;
    for(int i=0;i<str.length();i++){
        /* if(str[i]=='W' && str[i+1] == 'U' && str[i+2] == 'B' && flag ==0){
            str[i]= '\0';
            str[i+1]='\0';
            str[i+2]='\0';
        }
        else{
            flag=1;
        } */
        /* if(str[i]=='W' && str[i+1] == 'U' && str[i+2] == 'B' && flag ==1){
            str[i]= ' ';
            str[i+1]='\0';
            str[i+2]='\0';
            flag=0;
        }else */if(str[i]=='W' && str[i+1] == 'U' && str[i+2] == 'B' /* && flag ==0 */){
            str[i]= '8';
            str[i+1]='\0';
            str[i+2]='\0';
        }
    }
    /* c;out<<str<<endl */
    flag=0;
    int len=str.length();
   /*  cout<<"Lenght="<<len<<endl; */
    for(int i=0;i<len;i++){
        if(str[i]=='8' && flag == 0){
            str[i]=' ';
            flag=1;
            /* cout<<str<<endl; */
        }
        else if(str[i]=='8' && flag == 1){
            str[i]='\0';
            /* cout<<str<<endl; */
        }
        else if(str[i]!='\0'){
            flag = 0;
        }
      /*   cout<<flag<<endl; */
    }
    if(str[0]==' '){
        str[0]='\0';
    }
    for(int i=0;i<len;i++){
        if(str[i]!='\0'){
            cout<<str[i];
        }
    }
    return 0;

}

