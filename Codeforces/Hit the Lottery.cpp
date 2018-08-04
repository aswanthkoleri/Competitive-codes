#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int no = n/100;
     n = n%100;
    no+=n/20;
    n=n%20;
    no+=n/10;
    n=n%10;
    no+=n/5;
    n=n%5;
    no+=n;
    cout<<no;
    return 0;
}
