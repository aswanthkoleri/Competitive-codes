#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        cin>>b[i];

        int i=0,j=0;
        int val,count=0;
        while(i<n || j<m ){
            if(i<n && j<m ){
                if(a[i]<b[j]){
                    val=a[i];
                    i++;
                    count++;
                }else{
                    val=b[j];
                    j++;
                    count++;
                }
            }else if( i<n){
                val=a[i];
                i++;
                count++;
            }else if(j<m){
                val=b[j];
                j++;
                count++;
            }
            if(count==k){
                cout<<val<<endl;
                break;
            }
        }
    }
}
