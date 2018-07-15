#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &A) {
    int n=A.size()-1;
    A[n]+=1;
    /* cout<<A[n]; */
    while(A[n]>9 && n>0 )
    {
        A[n]=0;
        A[n-1]+=1;
        n--;
    }
    if(A[n]==10){
        A[n]=0;
        A.push_back(1);
        reverse(A.begin(),A.end());
    }
    while(A[0]==0){
        A.erase(A.begin());
    }
    
    return A;
}
typedef long long ll;
int main(){
    int n;
    cin>>n;
    vector<int> ar;
    int flag=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        ar.push_back(k);
    }
    vector<int> result=plusOne(ar);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}


