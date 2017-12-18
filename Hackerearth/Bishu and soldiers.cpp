#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int t;
    cin>>t;
    /* Array sort */
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-i-1;j++){
            if(ar[j]>ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
/* TEst case */
    while(t--){
        int no;/* Power of bishu  */
        cin>>no;
        long int sum=0;
        long int count=0;
        for(int i=0;i<n;i++){
            if(ar[i]<=no)
            {
                sum+=ar[i];
                count++;
            }
           
        }
       
        cout<<count<<" "<<sum;
        cout<<"\n";
    }
    return 0;
}