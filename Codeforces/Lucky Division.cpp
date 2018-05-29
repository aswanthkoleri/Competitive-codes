#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp;
    temp =n ;
    int d;
    int flag = 0;
    while(temp){
        d = temp%10;
        if(d!=4 || d!=7)
        {
            flag=1;
        }
        temp = temp/10;
    }
    if(flag=0){
        cout<<"YES";
    }
    else{
    if(n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74 == 0 || n%444 == 0 || n%447 == 0 || n%474 == 0|| n%477 == 0|| n%744==0 || n%747==0 || n%774==0 || n%777==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
    return 0;
}
