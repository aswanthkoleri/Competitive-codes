#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int count =0;
    int maxCount = count;
    for(int i=0;i<n-1;i++){
        if(ar[i+1]>=ar[i]){
            count++;
            if(count>maxCount){
                maxCount=count;
            }
        }
        else{
            count=0;
        }
    }
    cout<<maxCount+1;
    return 0;
}
