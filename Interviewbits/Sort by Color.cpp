
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void sortColors(vector<int> &A) {
    /*First find the 0's*/
    int k=0;
    for(int i=0;i<A.size();i++){
    	if(A[i]==0){
    		swap(A[k++],A[i]);
    	}
    }
    for(int i=k;i<A.size();i++){
    	if(A[i]==1){
    		swap(A[k++],A[i]);
    	}
    }
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
