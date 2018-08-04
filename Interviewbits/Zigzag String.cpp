
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string convert(string A, int B) {
	/*Create an array of string */
	string res[B];
	int row=0;
	int direction=0;/*0 means down and 1 means up */
	if(B==1){
		return A;
	}
	for(int i=0;i<A.size();i++){
		res[row].push_back(A[i]);
		if(direction==0){
			row++;
		}else{
			row--;
		}
		if(row==B-1){
			direction=1;
		}else if(row==0){
			direction=0;
		}
	}
	string temp;
	for(int i=0;i<B;i++){
		temp+=res[i];
	}
	return temp;
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    string A;
    int B;
    getline(cin,A);
    cin>>B;
    cout<<convert(A,B);
    return 0;
}
