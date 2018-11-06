#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<long int> ar;
    int n;
    cin>>n;
    unordered_map<long int,int> m;
    for(int i=0;i<n;i++){
        long int k;
        cin>>k;
        ar.push_back(k);
        if(m[k]==0)
        m[k]=i+1;
    }
    int q;
    cin>>q;
    while(q--){
        long int ele;
        cin>>ele;
        if(m[ele]!=0){
            cout<<"Yes "<<m[ele];
        }else{
            auto it=lower_bound(ar.begin(),ar.end(),ele);
            cout<<"No "<<it-ar.begin()+1;
        }
        cout<<endl;
    }
    return 0;
}
