
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int lengthOfLastWord(const string A) {
	string s(A);
	reverse(s.begin(), s.end());
	int count=0;
	if(s.length()==0){
		return count;
	}
	int flag=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==' ' && flag==1){
			break;
		}else if(s[i]!=' '){
			flag=1;
			count++;
		}
	}
	return count;
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from iNPUT.TXT
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    string s;
    getline(cin,s);
    cout<<lengthOfLastWord(s);
    return 0;
}
