
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(string A) {
int min=INT_MAX;
	for(int i=0;i<A.length();i++){
		int j=i-1;
		int k=i+1;
		int flag=0;
		int count;
		while(j>=0 && k<A.length()){
			if(A[j]==A[k]){
				j--;
				k++;
			}else{
				flag=1;
				break;
			}
		}
		if(flag==0 && k<A.length()){
			if(i==0){
			k=k-1;
			char c=A[k];
			while(A[k]==c){
				k++;
			}
		}
			count=A.length()-k;
			if(count<min){
				min=count;
			}
		}
		else if(flag==0 && k>=A.length() && j<0){
			min=0;
		}
	}
	return min;
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    string A;
    getline(cin,A);
    cout<<solve(A);
}
