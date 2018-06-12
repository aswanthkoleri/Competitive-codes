#include <bits/stdc++.h>
using namespace std;
int main(){
    int upperCount=0;
    int lowerCount=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        /* Check if upper  */
        if(str[i] >= 65 && str[i]<=91 ){
            upperCount++;
        }
        else{
            lowerCount++;
        }
    }
    if(upperCount<=lowerCount){
        /* Convert to lowercase */
        for(int i=0;i<str.length();i++){
            if(str[i] >= 65 && str[i]<=91){
                str[i] = str[i] + 32;
            }
        }
    }
    else{
        /* convert to uppercase */
        for(int i=0;i<str.length();i++){
            if(str[i] >= 97 && str[i]<=123){
                str[i] = str[i] - 32;
            }
        }
    }
    cout<<str;
    /* cout<<upperCount<<endl<<lowerCount; */
    return 0;

}
