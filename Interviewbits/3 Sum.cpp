
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int threeSumClosest(vector<int> &A, int B) {
	/*use 3 loops for the naive solution and then optimize it*/
	int result=INT_MIN;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1;k<n;k++){
				int sum=A[i]+A[j]+A[k];
				if(abs(abs(B)-abs(sum)) < abs(abs(result)-abs(b))){
					result=sum;
				}
			}
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
}
