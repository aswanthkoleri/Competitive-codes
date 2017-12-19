    #include <bits/stdc++.h>
    using namespace std;
    bool ar[1000001];
   long long int  res[1000001];
    void sieve(){
    
        memset(res,0,sizeof(res));
        memset(ar,true,sizeof(ar));
        long int i;
        ar[0]=false;
        ar[1]=false;
        for(i=2;i<1000001;i++){
        if(ar[i]==true){
            res[i]=res[i-1]+1;
        for(long int j=i*i;j<1000001;j+=i){
            ar[j]=false;
        
                }
            }
            else{
                res[i]=res[i-1];
            }
        } 
    }
    int main(){
        long int t;
        sieve();
            scanf("%ld",&t);
            while(t--){
                long long int l,r;
                scanf("%lld%lld",&l,&r);
                   
                if(l>r){
                    /* swap */
                    int temp = l;
                    l=r;
                    r=temp;
                }
            
            printf("%lld\n",res[r]-res[l-1]); 
        }

            return 0;
    }


    // c[100001] --> this is the array storing the