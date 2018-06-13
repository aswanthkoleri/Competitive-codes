#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char s[1000];
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
    cout<<s;

    return 0;
}
