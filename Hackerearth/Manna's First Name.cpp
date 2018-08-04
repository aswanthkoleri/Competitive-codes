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
        int suvo=0,suvojit=0;
        cin>>s;
        int i=0;
        int flag=0;
        while(i<strlen(s))
        {
            if(flag==1){
            i--;
            flag=0;
            }
            if(s[i]=='S'){
                flag=1;
                
                i++;
                if(s[i]=='U'){
                    i++;
                    if(s[i]=='V'){
                        i++;
                        if(s[i]=='O'){
                            i++;
                            suvo++;
                            if(s[i]=='J'){
                                i++;
                                if(s[i]=='I'){
                                    i++;
                                    if(s[i]=='T'){
                                    i++;
                                    suvojit++;
                                    suvo--;
                                    }
                                }
                            }

                        }
                    }
                }
            }
            i++;  
        }
        cout<<"SUVO = "<<suvo<<", "<<"SUVOJIT = "<<suvojit<<endl;
    }
    return 0;
}