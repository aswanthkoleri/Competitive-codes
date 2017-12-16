#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int n;
    scanf("%d",&n);
    long long int ar[n+1];
    int x[n+1],y[n+1];
    
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }   
stack<int> s;
    /* Compute x[i] */
    for( i=1;i<=n;i++)
    {
        while(!s.empty() && ar[i]>=ar[s.top()]){
            s.pop();
        }
        if(s.empty()){
            x[i]=-1;
        }
        else{
            x[i]=s.top();   
        }
        s.push(i);
    }
    while(!s.empty()){
        s.pop();
    }
    for( i=n;i>=1;i--)
    {
       while(!s.empty() && ar[i]>=ar[s.top()]){
            s.pop();
        }
        if(s.empty()){
            y[i]=-1;
        }
        else{
            y[i]=s.top();   
        }
        s.push(i);
    }
    for( i=1;i<=n;i++)
    cout << x[i]+y[i] << " ";
    return 0;
return 0;
}