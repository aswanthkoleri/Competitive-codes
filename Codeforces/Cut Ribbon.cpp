#include <bits/stdc++.h>
using namespace std;

int max(int a,int b,int c){
    int maximum;
    if(a>=b && a>=c){
        maximum = a;
    }else if(b>=a && b>=c){
        maximum = b;
    }else{
        maximum = c;
    }
}
vector<int> dp(4001, -1);

int n;
    int a,b,c;
/* int solve(int n,int a,int b,int c){
    if(n==0){
        return 0;
    }
    else if(n<0){
        return -INT_MAX;
    }
    else if(dp[n]!=-1){
        return dp[n];
    }
    else{
        return  dp[n]=1+max(solve(n-a,a,b,c),solve(n-b,a,b,c),solve(n-c,a,b,c));
    }
} */
int solve(int n)
{
    if(n < 0) return -2e9;
    if(n == 0)return 0;
    if(dp[n] != -1)return dp[n];
    return dp[n] = 1 + max(solve(n-a), max(solve(n-b), solve(n-c)));
}
int main(){
    
    cin>>n>>a>>b>>c;
    cout<<solve(n);

}

/* 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a,b,c;
    cin>>n>>a>>b>>c;
    int dp[40001];
    dp[0]=0;
    int x,y,z;
    for(int i=1;i<=n;i++){
        x=y=z=-1;
        if(i>=a);
        x=dp[i-a];
        if(i>=b)
        y=dp[i-b];
        if(i>=c)
        z=dp[i-c];
        if(x==-1 && y==-1 && z==-1)
            dp[i]=-1;
        else
            dp[i]=max(max(x,y),z);
    }
    cout<<dp[n];
}
 */