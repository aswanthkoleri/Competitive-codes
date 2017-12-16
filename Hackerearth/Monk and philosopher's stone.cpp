
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s,s1;
    int harry[10001];
    long int x;
    int n,q;
    cin>>n;
    int i;
    for(i = 0;i < n;i++)
    {
        cin>>harry[i];
    }
    cin>>q>>x;
    i=0;
    int sum=0,size=-1;
    while(q--)
    { int flag=0;
        string inst;
        cin>>inst;
        if(inst=="Harry"){
            s.push(harry[i]);
            sum=sum+harry[i];
            i++;
            
            
            if(sum==x){
               flag=1;
                
            }
            /* Calculate sum in stack  */
           /*  int sum=0,coins=0;
            int temp;
            while(!s.empty()){
                sum=sum+s.top();
                s1.push(s.top());
                s.pop();
                coins++;
            } */
            /* Stack popped out  */
            /* Refill stack  */
            /* while(!s1.empty){
                s.push()
            } */
        }
        else if(inst=="Remove"){
            sum=sum-s.top();
            
            s.pop();
            if(sum==x){
                flag=1;
            }
        }
        if(flag==1){
            size=s.size();
            break;
        }
    }
    cout<<size;
    return 0;
}