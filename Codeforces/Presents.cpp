#include <bits/stdc++.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n+1];
    int ind[n+1];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        ind[i] = i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            if(ar[j]>ar[j+1]){
                swap(&ar[j],&ar[j+1]);
                swap(&ind[j],&ind[j+1]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ind[i]<<" ";
    }
    return 0;
}
