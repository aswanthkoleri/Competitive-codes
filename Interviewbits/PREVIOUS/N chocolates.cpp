#include<bits/stdc++.h>
using namespace std;
int nchoc(int A, vector<int> &B) {
    /*Use priority queues */
    priority_queue<int> pq;
    for(int i=0;i<B.size();i++){
        pq.push(B[i]);
    }
    int mod = pow(10,9)+7;
    /*Now the max element will be the first element */
    int count=0;
    for(int i=0;i<A;i++){
        int max=pq.top();
       /* cout<<max<<endl;*/
        count=(count%mod+(max%mod))%mod;
        pq.pop();
        pq.push(max/2);
    }
    return count;
}

int main(){
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int k;
    cin>>k;
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    cout<<nchoc(k,v);
    return 0;
}
