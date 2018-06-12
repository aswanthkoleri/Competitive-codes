#include <bits/stdc++.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b=temp;
}
using namespace std;
int main(){
    int max;
    int n;
    int swapCount=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    max = ar[0];
    int maxindex=0;
    for(int i=0;i<n;i++){
        if(ar[i] > max ){
            max = ar[i];
            maxindex = i;
        }
    }
    if(max != ar[0]){
        for(int i=maxindex ; i>=1 ;i--){
            swap(&ar[i-1],&ar[i]);
            swapCount++;
        }
    }
     /* cout<<swapCount<<endl; */
    int min,minindex;
    min = ar[n-1];
    minindex = n-1;
    for(int i=0;i<n;i++){
        if(ar[i] <= min ){
            min = ar[i];
            minindex = i;
        }
    }
    if(min != ar[n-1]){
        for(int i = minindex ;i<n-1;i++){
            swap(&ar[i],&ar[i+1]);
            swapCount++;
        }
    }
    cout<<swapCount;
    return 0;
}
