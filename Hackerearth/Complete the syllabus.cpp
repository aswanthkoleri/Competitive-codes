
#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
     cin>>t;
     while(t--){
         long int no;
         cin>>no;
         int ar[7];
         int sum =0;
         for(int i=0;i<7;i++){
            cin>>ar[i];
            sum=sum+ar[i];
             }
        int index;
        if(no>sum && no%sum!=0){     
         index=no%sum;

         }
         else
         {
             index=no;
         }
        int i=0;
        while(index>0){
             index=index-ar[i];
             i=(i+1)%7;
         }
         
         switch(i){
             case 1 : cout<<"MONDAY\n";
             break;
             case 2 : cout<<"TUESDAY\n";
             break;
             case 3 : cout<<"WEDNESDAY\n";
             break;
             case 4 : cout<<"THURSDAY\n";
             break;
             case 5 : cout<<"FRIDAY\n";
             break;
             case 6 : cout<<"SATURDAY\n";
             break;
             case 0 : cout<<"SUNDAY\n";
             break;
         }
     }
            /*  int i=0;
         while(no>0){
             no=no-ar[i];
             i=(i+1)%7;
         }
          

     } */
        
}