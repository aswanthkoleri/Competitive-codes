
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string simplifyPath(string A) {
	int n=A.size();
	int i=0;
	string str="";
	stack<string> s;
	while(i<n){
	
		if(A[i]=='/'){
			if(str.size()>0){
				if(str==".."){
					if(!s.empty()){
					s.pop();
				}
					str="";
				}
				else if(str=="."){
					str="";
				}else{
					s.push(str);
					
					str="";
				}
			}
		}else{
			str+=A[i];
		}
		i++;
	}
	if(str.size()>0){
		if(str==".."){
					if(!s.empty()){
					s.pop();
				}
					str="";
				}
				else if(str=="."){
					str="";
				}else{
					s.push(str);
					
					str="";
				}
	}
	string result="";
	stack<string> temp;
	while(!s.empty()){
		temp.push(s.top());
		s.pop();
	}
	while(!temp.empty()){
		result+=("/"+temp.top());
		temp.pop();
	}
	
	if(result==""){
		return "/";
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
	
    string n;
    getline(cin,n);
    cout<<simplifyPath(n);
}
