#include <bits/stdc++.h>
using namespace std;
int main(){
    int ar[3];
    for(int i= 0 ;i<3;i++ ){
        cin>>ar[i];
    }
    
    sort(ar,ar+3);
    
    int distance = (ar[1]-ar[0]) + (ar[2]-ar[1]);
    cout<<distance;
    return 0;
}
