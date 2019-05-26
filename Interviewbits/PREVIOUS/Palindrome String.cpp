
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int isPalindrome(string A) {
	/*Remove all the spaces and other symbols */
	string res="";
	/*cout<<A.length();*/
	for(int i=0;i<A.length();i++){
		if(A[i]<=91 && A[i]>=65 || A[i]>=97 && A[i]<=122 || A[i]>=48 && A[i]<=57 ){
			if(isupper(A[i])){
				res.push_back(tolower(A[i]));
			}else{
			res.push_back(A[i]);
		}
		}
	}
	/*cout<<res;*/
	string reversed(res);
	reverse(reversed.begin(), reversed.end());
	/*cout<<endl<<reversed;*/
	if(reversed==res){
		return 1;
	}else{
		return 0;
	}
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
    cout<<isPalindrome(A);
    return 0;
}
