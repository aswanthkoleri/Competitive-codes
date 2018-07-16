#include <bits/stdc++.h>
using namespace std;
int maxSubArray(const vector<int> &A) {
    int maxEndingHere=0,maxValue=0;
    int n=A.size();
    int flag=0;
    for(int i=0;i<n;i++){
        maxEndingHere+=A[i];
        if(maxEndingHere<0 ){
            maxEndingHere=0;
        }else{
            flag=1;
        }
        if(maxValue<maxEndingHere){
            maxValue=maxEndingHere;
        }
    }
    if(flag==0){
        maxValue = *max_element(A.begin(),A.end());
    }
    return maxValue;
    
}

typedef long long ll;
int main(){
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        ar.push_back(k);
    }
    int result;
    result = maxSubArray(ar);
    cout<<result;
    return 0;
}
