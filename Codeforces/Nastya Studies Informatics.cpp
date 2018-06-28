#include <bits/stdc++.h>

using namespace std;
long long int lcm(long long int n1,long long int n2){
    
   long long int  max;
    // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            return max;
        }
        else
            ++max;
    } while (true);
    

}
int gcd (int a, int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}
int main(){
    long long int l,r,x,y;
    cin>>l>>r>>x>>y;
    long long int c=0;
   /* long long  int d[r+1][r+1];
    for(long long int i=0;i<=r;i++){
        for(long long int j=0;j<=r;j++){
            d[i][j]=-1;
        }
    } */
    for(long  long int a=l;a<=r;a++){
        for(long long int b=l;b<=r;b++){
            if( gcd(a,b)==1 && a*b == x*y  ){
        
        
            c++;
            
                /* 
                if(a!=b){
                    c++;
                } */
                /* d[a][b]=1;
                d[b][a]=1; */
            }
        }
    }
    cout<<c;
    return 0;
}
