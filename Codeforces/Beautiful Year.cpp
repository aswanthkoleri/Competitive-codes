#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag1=1;
    while(flag1){
        n++;
        /* Check all digits are distinct  */
        /* If distinct {
            flag = 0;
        } */
        int flag=1;
        int temp = n;
        int i=0;
        int ar[5];
        while(temp){
        int digit=temp%10;
        ar[i++]=digit; 
        temp = temp/10;
        }        
        /* Array of digits created  */
        /* Now check whether distinct */
        for(int j=0;j<4;j++){
            for(int k=j-1;k>=0;k--){
                if(ar[j] == ar[k]){
                    /* Not distinct */
                    flag=0;
                    break;
                }
                if(flag==0){
                    break;
                }
            }
        }
        if(flag==1){
            flag1=0;
        }
    }
    cout<<n;
}
