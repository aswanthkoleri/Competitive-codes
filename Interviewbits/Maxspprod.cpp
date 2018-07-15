#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int maxSpecialProduct(vector<int> &A) {
    int maxNo=0;
    for(int i=1;i<A.size()-1;i++){
        int j=i-1;
        while(A[i]>=A[j] && j>=0 ){
            j--;
        }
        if(j<0){
            j=0;
        }
        int k=i+1;
        while(A[i]>=A[k] && k<A.size()){
            k++;
        }
        if(k>A.size()){
            k=0;
        }
        maxNo=max(maxNo,j*k);
    }
    return maxNo;
}

int main(){
    int n;
    cin>>n;
    vector<int> A;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        A.push_back(k);
    }
    cout<<maxSpecialProduct(A);
    return 0;
}
