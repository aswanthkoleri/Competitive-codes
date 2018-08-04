
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int value(char letter){
	switch(letter){
		case'I' : return 1;
		break;
		case 'V' : return 5;
		break;
		case 'X' : return 10;
		break;
		case 'L' : return 50;
		break;
		case 'C' : return 100;
		break;
		case 'D' : return 500;
		break;
		case 'M' : return 1000;
		break; 
		default : return -1;
		break;
	}

}
int romanToInt(string A) {
	int count=0;
	for(int i=0;i<A.length();i++){
		int a1=value(A[i]);
		if(i+1<A.length()){
			int a2=value(A[i+1]);
			if(a1>=a2){
				count+=a1;
			}else{
				count+=(a2-a1);
				i++;
			}
		}else{
			count+=a1;
		}
	}
	return count;
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
    cout<<romanToInt(A);
    return 0;
}
