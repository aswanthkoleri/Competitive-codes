#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        set<int,greater <int> > s;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            s.insert(ar[i]);
        }
        int k;
        cin>>k;
        map<int,vector<int>> m;
        for(int i=0;i<n;i++){
            m[ar[i]].push_back(i);
        }
        for(auto it=s.begin();it!=s.end() && k>0;it++){
            vector<int> temp=m[*it];
            for(int j=0;j<temp.size();j++){
                cout<<temp[j]<<" ";
            }
           
            k--;
        }
        cout<<endl;
    }
	return 0;
}