#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int t = *a;
    *a=*b;
    *b=t;
}
int main(){
    int t;
        cin>>t;
        int ar[t];
        int a[t];
        for(int i=0;i<t;i++){
            cin>>ar[i];
        }
        for(int i=0;i<t;i++){
            cin>>a[i];
        }
        for(int i=0;i<t-1;i++){
            for(int j=0;j<t-i-1;j++){
                if(ar[j]>ar[j+1]){
                    swap(&ar[j],&ar[j+1]);
                }
            }
        }
        for(int i=0;i<t-1;i++){
            for(int j=0;j<t-i-1;j++){
                if(a[j]>a[j+1]){
                    swap(&a[j],&a[j+1]);
                }
            }
        }
        int flag=0;
        for(int i=0;i<t;i++){
            if(ar[i]<a[i]){
                flag=1;break;

            }
        }
        if(flag==1){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
        return 0;
}