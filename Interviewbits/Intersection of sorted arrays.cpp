#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> intersect(const vector<int> &A, const vector<int> &B) {
	std::vector<int> c;
	int i=0,j=0;
	while(i<A.size() && j<B.size()){
		if(A[i]<B[j]){
			i++;
		}else if(A[i]>B[j]){
			j++;
		}else{
			c.push_back(A[i]);
			i++;
			j++;
		}
	}
	return c;

}


int main(){

	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int a,b;
    cin>>a>>b;
    std::vector<int> A;
    std::vector<int> B;
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
    std::vector<int> c=intersect(A,B);
    for(int i=0;i<c.size();i++){
    	cout<<c[i]<<" ";
    }
    return 0;
}
