#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
int count=0;

   cin>>n;
   int ar[n];
   int max=-999;
   for(int i=0;i<n;i++){
       cin>>ar[i];
       if(ar[i]>max){
           max=ar[i];
       }
   }
   int c[max+1]={0};
   for(int i=0;i<n;i++){
       c[ar[i]]++;
   }
   for(int i=0;i<=max;i++){
       cout<<c[i]<<endl;
   }
   for(int i=0;i<n;i++){
       int flag=0;
   for(int j=0;j<=30;j++){
       int s = pow(2,j);
       if( c[s-ar[i]]>1 || (c[s-ar[i]]==1 && s-ar[i]!=ar[i])){
           flag=1;
           break;
       }
   }

   if(flag!=1){
           count++;
       }
   }
   cout<<count;
   return 0;   
}
