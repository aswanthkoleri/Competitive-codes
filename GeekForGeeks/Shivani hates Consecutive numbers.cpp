/*Shivani hates Consecutive numbers */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		unorder_map<int,int> m;
		int n;
		cin>>n;
		int ar[n];
		int sum=0;
		for (int i = 0; i < n; ++i){
			cin>>ar[i];
			m[ar[i]]++;
			sum+=ar[i];
		}
		sort(ar,ar+n,greater <int>());
		for(int i=0;i<n;i++){
			if(m[ar[i]]>0){
				/*Then delete the occurence of ar[i]-1 if it's present*/
				if(m[ar[i]-1]>0){
					m[ar[i]-1]--;
					sum-=(ar[i]-1);
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}