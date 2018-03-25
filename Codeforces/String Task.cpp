#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int length = str.length();
    for(int i=0;i<length;i++){
       
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u' || str[i] == 'Y' || str[i] == 'y' ){
            str.erase(str.begin() + i );   
            length--;
            i--;         
        }
         else{ 
            if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;

            str.insert(i,".");
            length++;
            i++;
        }
    }
    cout<<str;
    return 0;
}
