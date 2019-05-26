#include <bits/stdc++.h>
using namespace std;

void solve(string str,int curr,int len,string A,vector<string> &result){
	if(str.size()==len){
		result.push_back(str);
		return;
	}else if(curr>=len){
		return;
	}else{
		string newStr;
		for(int i=curr;i<len;i++){
		if(A[i]=='1'){
			newStr=str+"1";
			solve(newStr,i+1,len,A,result);
		}else if(A[i]=='0'){
			newStr=str+"0";
			solve(newStr,i+1,len,A,result);
		}else if(A[i]=='2'){
			newStr=str+"a";
			solve(newStr,i+1,len,A,result);

			newStr=str+"b";
			solve(newStr,i+1,len,A,result);
			newStr=str+"c";
			solve(newStr,i+1,len,A,result);
		}else if(A[i]=='3'){
			newStr=str+"d";
			solve(newStr,i+1,len,A,result);
			newStr=str+"e";
			solve(newStr,i+1,len,A,result);
			newStr=str+"f";
			solve(newStr,i+1,len,A,result);
		}else if(A[i]=='4'){
			newStr=str+"g";
			solve(newStr,i+1,len,A,result);
			newStr=str+"h";
			solve(newStr,i+1,len,A,result);
			newStr=str+"i";
			solve(newStr,i+1,len,A,result);
		}else if(A[i]=='5'){
			newStr=str+"j";
			solve(newStr,i+1,len,A,result);
			newStr=str+"k";
			solve(newStr,i+1,len,A,result);
			newStr=str+"l";
			solve(newStr,i+1,len,A,result);
		}else if(A[i]=='6'){
			newStr=str+"m";
			solve(newStr,i+1,len,A,result);
			newStr=str+"n";
			solve(newStr,i+1,len,A,result);
			newStr=str+"o";
			solve(newStr,i+1,len,A,result);
		}else if(A[i]=='7'){
			newStr=str+"p";
			solve(newStr,i+1,len,A,result);
			newStr=str+"q";
			solve(newStr,i+1,len,A,result);
			newStr=str+"r";
			solve(newStr,i+1,len,A,result);
			newStr=str+"s";
			solve(newStr,i+1,len,A,result);
		}else if(A[i]=='8'){
			newStr=str+"t";
			solve(newStr,i+1,len,A,result);
			newStr=str+"u";
			solve(newStr,i+1,len,A,result);
			newStr=str+"v";
			solve(newStr,i+1,len,A,result);
		}else if(A[i]=='9'){
			newStr=str+"w";
			solve(newStr,i+1,len,A,result);
			newStr=str+"x";
			solve(newStr,i+1,len,A,result);
			newStr=str+"y";
			solve(newStr,i+1,len,A,result);
			newStr=str+"z";
			solve(newStr,i+1,len,A,result);
		}
		}
	}

}
vector<string> letterCombinations(string A) {
	int len=A.size();
	string str;
	std::vector<string> result;
	for(int i=0;i<len;i++){
		if(A[i]=='1'){
			str="1";
			solve(str,i+1,len,A,result);
		}else if(A[i]=='0'){
			str="0";
			solve(str,i+1,len,A,result);
		}else if(A[i]=='2'){
			str="a";
			solve(str,i+1,len,A,result);
			str="b";
			solve(str,i+1,len,A,result);
			str="c";
			solve(str,i+1,len,A,result);
		}else if(A[i]=='3'){
			str="d";
			solve(str,i+1,len,A,result);
			str="e";
			solve(str,i+1,len,A,result);
			str="f";
			solve(str,i+1,len,A,result);
		}else if(A[i]=='4'){
			str="g";
			solve(str,i+1,len,A,result);
			str="h";
			solve(str,i+1,len,A,result);
			str="i";
			solve(str,i+1,len,A,result);
		}else if(A[i]=='5'){
			str="j";
			solve(str,i+1,len,A,result);
			str="k";
			solve(str,i+1,len,A,result);
			str="l";
			solve(str,i+1,len,A,result);
		}else if(A[i]=='6'){
			str="m";
			solve(str,i+1,len,A,result);
			str="n";
			solve(str,i+1,len,A,result);
			str="o";
			solve(str,i+1,len,A,result);
		}else if(A[i]=='7'){
			str="p";
			solve(str,i+1,len,A,result);
			str="q";
			solve(str,i+1,len,A,result);
			str="r";
			solve(str,i+1,len,A,result);
			str="s";
			solve(str,i+1,len,A,result);
		}else if(A[i]=='8'){
			str="t";
			solve(str,i+1,len,A,result);
			str="u";
			solve(str,i+1,len,A,result);
			str="v";
			solve(str,i+1,len,A,result);
		}else if(A[i]=='9'){
			str="w";
			solve(str,i+1,len,A,result);
			str="x";
			solve(str,i+1,len,A,result);
			str="y";
			solve(str,i+1,len,A,result);
			str="z";
			solve(str,i+1,len,A,result);
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
	string A;
	cin>>A;
	std::vector<string> result=letterCombinations(A);
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<endl;
	}
}