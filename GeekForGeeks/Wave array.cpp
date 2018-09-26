#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}
		sort(ar,ar+n);
		for(int i=0;i<n-1;i+=2){
			/*Swap it */
			int temp=ar[i];
			ar[i]=ar[i+1];
			ar[i+1]=temp;
		}
		for(int i=0;i<n;i++){
			cout<<ar[i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
// sudoku(2,_,_,_,9,_,_,_,1,3,_,9,_,_,7,_,_,_,_,_,1,_,4,_,_,7,_,_,6,_,_,_,_,_,_,_,_,_,_,_,_,3,_,_,_,_,_,8,6,_,_,7,9,_,6,_,_,7,_,_,8,_,_,1,2,3,_,_,8,_,_,_,_,8,7,_,_,4,3,_,_).