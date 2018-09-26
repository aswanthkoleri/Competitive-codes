#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unsigned long long int sum=,m=10e9+7;
		unsigned long long int temp=7;
		for(int i=2;i<=n;i++){
			sum=(temp*2) + (i-1);
			sum=sum%m;
			temp=sum;
		}
		cout<<sum<<endl;
	}
	return 0;
}