#include <bits/stdc++.h>
using namespace std;
    int main(){
    long int n;
    cin>>n;
    long int a[n];
    for(long int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxStep,min=a[0];
    for(int i=0;i<n;i++){
        int temp = max(i+1,a[i]);
    }
    return 0;
}
