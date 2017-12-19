#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
     cin>>t;
     while(t--){
         int no;
        cin>>no;
        int sum =0 ;
        for(int i=1;i<no;i++){
            if(no%i==0){
                sum+=i;
            }
        }
        cout<<sum<<"\n";
     }   
return 0;
}
