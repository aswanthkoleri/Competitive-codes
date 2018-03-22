#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u' ){
            str.erase(str.begin() + i );            
        }
        else{ 
            str[i]=str[i]+32;
            str.insert(i,".");
        }
    }
    cout<<str;
    return 0;
}
