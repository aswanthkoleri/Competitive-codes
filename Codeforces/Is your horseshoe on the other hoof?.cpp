#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    int count = 0,pcount;
    int ar[4];
    for(int i=0;i<4;i++){
        cin>>ar[i];
    }
    for(int i=0;i<4;i++){
        pcount = 0;
        /* Check whther distinct */
        int distinct = 1;
        for(int j=i-1;j>=0;j--){
            if(ar[j]==ar[i]){
                distinct = 0;
                break;
            }
        }
        if(distinct){
            for(int j=0;j<4;j++){
            if(ar[i] == ar[j]){
                pcount++;
            }
        }
        if(pcount>1){
            /* cout<<pcount<<endl; */
            pcount--;
            count+=pcount;
        }
        }
        }
 
    cout<<count;
    return 0;   
}
