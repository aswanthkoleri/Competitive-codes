#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int sum=0,i=0,max=0,count=0;
	while(max<n){
		i++;
		max+=i;
		count++;
	}
	cout<<count<<endl;
	return 0;
}