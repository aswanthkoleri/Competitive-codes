#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b = temp;
}
int main(){
    int s,n;
    cin>>s>>n;
    int x[n],y[n];
    int life=s,flag=0;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n-1;i++){
           for(int j=0;j<n-i-1;j++){
               if(x[j]>x[j+1]){
                   swap(&x[j],&x[j+1]);
                   swap(&y[j],&y[j+1]);
               }
           }
    }
    for(int i=0;i<n;i++){
        if(life>x[i]){
            life+=y[i];
        }else{
            flag=1;
            break;
        } 
    }
    /* Main logic 
        
     */
    if(flag==1){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
/* 999 2
1010 10
67 89  */