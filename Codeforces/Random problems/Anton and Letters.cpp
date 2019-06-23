#include <bits/stdc++.h>
using namespace std;
int main(){
    
    char memory[10001];
    int j=0;
    int distinct=0;
    int count = 0;
/* Input the string  */
    char s[10001];
    char temp;
    cin>>temp;
    int i=0;
    while(temp != '}'){
        if( temp != ' '){
            s[i++]=temp;    
            cin>>temp;
        }
    }
    s[i++] = '}';
    /* cout<<s<<endl;
    cout<<i<<endl; */
    int len = i;
    for(int i=0;i<len;i++){
        /* cout<<s[i]<<endl; */
        int flag =0 ;
        if(s[i]!= '{' && s[i]!= '}' && s[i]!=',' ){
            /* cout<<"inside : "<<s[i]<<endl; */  
            for(int k=0;k<=j;k++){
                if(s[i]==memory[k]){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
                distinct++;
                memory[j++] = s[i];
                /* cout<<s[i]<<endl; */
                
            }
        }
    }
   /*  for(int i=0;i<=j;i++){
        cout<<"Mem"<<endl;
        cout<<memory[i]<<endl;
    } */
    cout<<distinct;
    return 0;
}
