#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    int rem=0;
    /* values */
    for(int i=0;i<n;i++){
        cin>>ar[i];
        rem = rem+ar[i];
    }
    int track=0;
    int i =0;
    sort(ar,ar+n,greater<int>());
    while(track<=rem){
        track = track + ar[i];
        rem = rem - ar[i];
        i++;
    }
    cout<<i;
    return 0;
}
