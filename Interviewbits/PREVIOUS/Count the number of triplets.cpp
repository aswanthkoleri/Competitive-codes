
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	std::vector<int> v;
    	for(int i=0;i<n;i++){
    		int k;
    		cin>>k;
    		v.push_back(k);
    	}
    	/*Now find the triplet */
    	/*int restSum=0;
    	for(int i=0;i<n;i++){
    		restSum+=v[i];
    	}*/
    	sort(v.begin(),v.end(),greater<int>());
    	/*for(int i=0;i<n;i++){
    		cout<<v[i]<<" ";
    	}*/
    	/*cout<<endl;*/
    	int sum;
    	int count=0;
    	for(int i=0;i<n-2;i++){
    		sum=v[i];
    		/*cout<<"Sum = "<<sum<<endl;*/
    		int j=i+1;
    		int k=n-1;
    		while(j<k){
    			if(v[k]+v[j]==sum){
    				count++;
    				j++;
    				k--;
    			}else if(v[k]+v[j]<sum){
    				k--;
    			}else if(v[k]+v[j]>sum){
    				j++;
    			}
    		}
    	}
    	if(count)
    	cout<<count<<endl;
    	else
    	cout<<-1<<endl;
    }
    return 0;
}
