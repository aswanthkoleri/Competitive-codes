#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    scanf("%d%d",&n,&q);
    /* input array */
    int i;
    long int ar[n+1];
    long long int suma[n+1];
    suma[0]=0;
    long int sum=0;
    for(i=1;i<=n;i++){
        scanf("%ld",&ar[i]);
        sum=sum+ar[i];
        suma[i]=sum;
    }
    long long int mean;
    while(q--){
        int l,r;
        scanf("%d%d",&l,&r);
        /* Find mean */
        mean = (suma[r]-suma[l-1])/(r-l+1);
        printf("%lld",mean);
        printf("\n");
    }
    return 0;
}