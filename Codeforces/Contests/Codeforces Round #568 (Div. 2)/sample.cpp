#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	multiset <int> ar;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		ar.insert(k);
	}
	auto it=ar.end();
	cout<<*it;
	ar.erase(ar.end());
	it=ar.end();
	cout<<*it;
	return 0;
}