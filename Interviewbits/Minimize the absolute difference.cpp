#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(vector<int> &A, vector<int> &B, vector<int> &C) {
	int a=A.size();
	int b=B.size();
	int c=C.size();
	int mid=min(a,b);
	int minimumSize=min(mid,c);
	int minElement;
	if(minimumSize==A.size()){
		minElement=A[0];
	}else if(minimumSize==B.size()){
		minElement=B[0];
	}else if(minimumSize==C.size()){
		minElement=C[0];
	}
	/*cout<<minElement<<endl;*/
	/*Find maximum element in A[] upto min element*/
	int maxA=A[0];
	for(int i=0;i<a && A[i]<=minElement;i++){
		if(A[i]>maxA){
			maxA=A[i];
		}
	}
	/*cout<<maxA<<endl;*/
	int maxB=B[0];
	for(int i=0;i<b && B[i]<=minElement;i++){
		if(B[i]>maxB){
			maxB=B[i];
		}
	}/*cout<<maxB<<endl;*/
	
	int maxC=C[0];
	for(int i=0;i<c && C[i]<=minElement;i++){
		if(C[i]>maxC){
			maxC=C[i];
		}
	}
	int midMax=max(maxA,maxB);
	int maximum=max(midMax,maxC);
	int midMin=min(maxA,maxB);
	int minimum=min(midMin,maxC);
	return abs(maximum-minimum);
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
    std::vector<int> A,B,C;
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<a;i++){
    	int k;
    	cin>>k;
    	A.push_back(k);
    }
    for(int i=0;i<b;i++){
    	int k;
    	cin>>k;
    	B.push_back(k);
    }
    for(int i=0;i<c;i++){
    	int k;
    	cin>>k;
    	C.push_back(k);
    }
    cout<<solve(A,B,C);
    return 0;
}
