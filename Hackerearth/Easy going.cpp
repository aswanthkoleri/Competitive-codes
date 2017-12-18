
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int ele=n-m;
        /* Find max sum ! */
        /* First sort using bubble sort  */
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++){
                if(ar[j]>ar[j+1]){
                    /* Swap */
                    int temp = ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=temp;
                }
            }
        }
        /* Find max sum  */
        int max=0;
        int i=n-1;
        for(int c=0;c<ele;i--){
            max+=ar[i];
            c++;
        }
        int min =0;
        for(i=0;i<ele;i++){
            min+=ar[i];
        }
        cout<<max-min<<"\n";
    }   
    return 0;
}