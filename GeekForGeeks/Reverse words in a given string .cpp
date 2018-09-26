#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin>>t;
	while(t--){
		string s[100];
		string str;
		cin>>str;
		 cout<<str<<endl;
		string temp="";
		int len=str.size();
		int j=0;
		for(int i=0;i<len;i++){
			if(str[i]!='.'){
				temp+=str[i];
			}else{
				s[j++]=temp;
				temp="";
			}
		}
		s[j++]=temp;
		temp="";
		for(int i=j-1;i>=1;i++){
			string word=s[i];
			temp+=(word+".");
		}
		temp+=s[0];
		cout<<temp<<endl;
	}
	return 0;
}