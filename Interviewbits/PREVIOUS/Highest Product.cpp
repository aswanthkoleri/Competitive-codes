#include<bits/stdc++.h>
using namespace std;
int maxp3(vector<int> &A) {
    int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
    int min1=INT_MAX,min2=INT_MAX;
    int n=A.size();
    for(int i=0;i<n;i++){
        if(A[i]>max1){
            max3=max2;
            max2=max1;
            max1=A[i];
            
        }else if(A[i]>max2){
            max3=max2;
            max2=A[i];
            
        }else if(A[i]>max3){
            max3=A[i];
        }
        if(A[i]<min1){
             min2=min1;
            min1=A[i];
           
        }else if(A[i]<min2){
            min2=A[i];
        }
    }
    return max(max1*max2*max3,max1*min1*min2);
}

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    std::vector<int> A;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        A.push_back(k);
    }
    cout<<maxp3(A);
    return 0;
}
