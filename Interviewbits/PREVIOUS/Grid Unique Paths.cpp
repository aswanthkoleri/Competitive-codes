#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int countWays(int X,int Y,int A,int B){
    if(X==A && Y==B){
        return 1;
    }
    if(X>A || Y>B){
        return 0;
    }
    return countWays(X+1,Y,A,B)+countWays(X,Y+1,A,B);
}
int main(){
    int A,B;
    cin>>A>>B;
    int count = countWays(0,0,A,B);
    cout<<count;
    return 0;
}
