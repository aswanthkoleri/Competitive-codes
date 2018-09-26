#include<bits/stdc++.h> 
using namespace std;
vector<int> dNums(vector<int> &A, int B) {
	/*First iterate through all the windows */
	int len=A.size();
	vector<int> result;
	set<int> s;
	/*Iterate through the first window*/
	map<int,int> m;/*Maintains the frequency of the elements*/
	for(int i=0;i<B;i++){
		m[A[i]]++;
		s.insert(A[i]);
	}
	int i=0;
	int j=B-1;
	
	int temp=s.size();
	while(j<len){
		
		result.push_back(temp);
		if(--m[A[i++]] == 0 ){
			temp--;
		}
		if(++m[A[++j]] == 1){
			temp++;
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
	vector<int> A;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		A.push_back(k);
	}
	int B;
	cin>>B;
	std::vector<int> result=dNums(A,B);
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}
