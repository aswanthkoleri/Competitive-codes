#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    int minimum ,maximum;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        
    }
    maximum=ar[0];
    minimum=ar[0];
    int p=0;
    for(int i=1;i<n;i++){
        if(ar[i] > maximum || ar[i] < minimum ){
            p++;
        }
        if(minimum > ar[i] ){
            minimum=ar[i];
        }
        if(maximum <ar[i]){
            maximum=ar[i];
        }
    }
    cout<<p;
    return 0;
}
