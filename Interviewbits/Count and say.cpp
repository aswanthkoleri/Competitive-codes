#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string countAndSay(int A) {
	string s[A];
	s[0]="1";
	s[1]="11";
	for(int i=2;i<A;i++){
	int j=0;
	int flag=0;
	int count=1;
	string temp="";
	string last;
	
	while(j<s[i-1].size()-1 ){
		
		if(s[i-1][j]!=s[i-1][j+1]){
			temp+=(to_string(count)+(s[i-1][j]));
			count=0;
		}
		 last=s[i-1][j+1];
		 /*cout<<last<<endl;*/
		count++;
		j++;
	}
	
	
	temp += (to_string(count)+s[i-1][j]);
	
	s[i]=temp;
	/*Count consecutive no's and then mrege count and that no*/
	/*Merge it */
	}
	return s[A-1];
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
    cout<<countAndSay(n);
    return 0;
}

