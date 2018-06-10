#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    long long int l;
    cin>>n>>l;
    /* find odd or even */
    long long int limit;
    if(n%2 == 0){
    limit = n/2;
    }
    else
    {
        limit = n/2+1;
    }
    
    if(l <= limit) {
        /* odd */
        cout<<(1+(2*(l-1)));
    }
    else{
        /* even */
    
        cout<<(2+(2*(l-(limit)-1)));
    }
    return 0;
}
