#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n][2];
    for(int i=0;i<n;i++){
        cin>>ar[i][0]>>ar[i][1];
    }
    int count = 0;
    for(int i=0;i<n;i++){
        /* Take each team and compare the guest jersey with the home jersey Whenever they are equal increment the count  */
        for(int j = 0;j<n;j++){
            if(ar[i][1] == ar[j][0]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
