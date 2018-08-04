#include <bits/stdc++.h>

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

using namespace std;

int main(){
    int n;
    cout<<"enter job ";
    cin>>n;
    int j[n],d[n],p[n];
    /* Enter the deadlines  */
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    /* Enter the profit */
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    /* Sequence according to profit  */
    /* Use bubble sort  */
    cout<<"Order before : "<<endl;
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(p[j]<p[j+1]){
                swap(&p[j],&p[j+1]);
                swap(&d[j],&d[j+1]);
            }
        }
    }
    cout<<endl;
    cout<<"Order after"<<endl;
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    int track=0;
    int maxProfit=0;
    for(int i=0;i<n;i++){
        if(track<d[i]){
            maxProfit+=p[i];
            track=d[i];
        }
    }
    cout<<maxProfit;
    
return 0;
    
}
