#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A,vector<int> &B){
	int k=A.size();
	int count=0;
	std::vector<int> result;
	sort(A.begin(),A.end());
	for(int i=0;i<A.size();i++){

		cout<<A[i]<<" ";
	}

	cout<<endl;
	sort(B.begin(),B.end());
	for(int i=0;i<B.size();i++){
		cout<<B[i]<<" ";
	}
	cout<<endl;
	for(int i=k-1;i>=0;i--){
		int prev=A[k-1]+B[i-1];
		int j=0;
		while(count<k && B[i]+A[k-1-j]>=prev){
			result.push_back(B[i]+A[k-1-j]);
			count++;
			j++;
		}
		if(count==k){
			break;
		}
	}
	return result;
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
	std::vector<int> B;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		A.push_back(k);
	}
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		B.push_back(k);
	}
	std::vector<int> result;
	result=solve(A,B);
	for(int i=0;i<n;i++){
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}