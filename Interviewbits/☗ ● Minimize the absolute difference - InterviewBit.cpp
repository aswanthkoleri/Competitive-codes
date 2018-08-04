#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int maxThree(int a,int b,int c){
	return max(a,max(b,c));
}

int minThree(int a,int b,int c){
	return min(a,min(b,c));
}

int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
 	/*Find the maximum in all the arrays */
 	int aSize=A.size();
 	int bSize=B.size();
 	int cSize=C.size();
 	int aMax=A[aSize-1];
 	int bMax=B[bSize-1];
 	int cMax=C[cSize-1];
 	/*cout<<aMax<<" "<<bMax<<" "<<cMax<<endl;*/
 	int minDifference=abs(maxThree(aMax,bMax,cMax)-minThree(aMax,bMax,cMax));
 	/*cout<<minDifference<<endl;*/
 	if(minDifference==0){
 		return 0;
 	}
 	while(aSize>0 && bSize>0 && cSize>0 ){
 		if(maxThree(aMax,bMax,cMax)==aMax){
 			aSize--;
 			aMax=A[aSize-1];
 		}else if(maxThree(aMax,bMax,cMax)==bMax){
 			bSize--;
 			bMax=B[bSize-1];
 		}else if(maxThree(aMax,bMax,cMax)==cMax){
 			cSize--;
 			cMax=C[cSize-1];
 		}
 		/*cout<<aMax<<" "<<bMax<<" "<<cMax<<endl;
 		cout<<maxThree(aMax,bMax,cMax)<<" "<<minThree(aMax,bMax,cMax)<<"loop"<<endl;*/
 		int temp=abs(maxThree(aMax,bMax,cMax)-minThree(aMax,bMax,cMax));
 		if(temp<minDifference){
 			minDifference=temp;
 		}
 		/*cout<<minDifference<<"in loop"<<endl;*/
 	}
 	return minDifference;
 }

/*
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int a,b,c;
    std::vector<int> A,B,C;
    cin>>a;
    for(int i=0;i<a;i++){
    	int k;
    	cin>>k;
    	A.push_back(k);
    }
    cin>>b;
    for(int i=0;i<b;i++){
    	int k;
    	cin>>k;
    	B.push_back(k);
    }
    cin>>c;
    for(int i=0;i<c;i++){
    	int k;
    	cin>>k;
    	C.push_back(k);
    }
    cout<<solve(A,B,C);
}
*/