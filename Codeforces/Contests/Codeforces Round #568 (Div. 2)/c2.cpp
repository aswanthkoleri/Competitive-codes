#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	long int n,limit;
	cin>>n>>limit;
	// Accept array 
	long long int sumTillNow=0;
	multiset <int> ar;
	multiset <int> :: iterator it;
	for(int i =0 ; i<n;i++){
		long long int k;
		cin>>k;
		
		ll int count=0;
		if(sumTillNow+k>limit){
			ll int temp=sumTillNow+k;
			multiset <int> newOne (ar.begin(),ar.end());
			// for(auto it =newOne.begin();it!=newOne.end();it++){
				// cout<<*it<<" ";	
			// }
			// newOne=ar;
			// cout<<temp<<endl;
			while (temp > limit){
				// Get last element
				auto last=newOne.end();
				last--;
				ll int popped=*last;
				// erase that one
				// cout<<"***"<<popped<<"***"<<endl;
				newOne.erase(--newOne.end());
				temp=temp-popped;
				count+=1;
				// cout<<temp<<endl;
			}
		}
		if(i==n-1){
			cout<<count<<endl;
		}else{
			cout<<count<<" ";
		}
		ar.insert(k);
		sumTillNow+=k;
	}
}