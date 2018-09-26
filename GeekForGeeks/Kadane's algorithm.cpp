#include<bits/stdc++.h>
using namespace std;
int main(){
	int curr_max=ar[0];
	int max_so_far=ar[0];
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	/*Now kadanes algo */
	for(int i=1;i<n;i++){
		curr_max=max(ar[i],curr_max+ar[i]);
		max_so_far=(curr_max,max_so_far);
	}
	cout<<max_so_far<<endl;
	return 0;
}