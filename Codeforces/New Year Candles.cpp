#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a,b;
    cin>>a>>b;
    int hour = 0;
    int candle=0;
    while(a>0){
        candle++;
        if(candle%b==0 && candle!=0){
            a++;
            a--;
        }else{
            a--;
        }
        
    }
    cout<<candle;
    return 0;
}
