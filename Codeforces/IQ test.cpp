#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int even=0,odd=0;
    int oddindex,evenindex;
    for(int i=0;i<n;i++){
        if(ar[i]%2){
            odd++;
            oddindex = i;
        }else{
            even++;
            evenindex = i;
        }
    }
    if(odd==1){
        cout<<oddindex+1;
    }else{
        cout<<evenindex+1;
    }
}
