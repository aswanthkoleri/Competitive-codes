
	
#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

		int n;
		cin>>n;
		if(n==0){
			cout<<0;
		}else {
			int count=1;
			if(n>1){
				count++;
			count+=((n/2)-1);

		}
			cout<<count;
		}

	return 0;
}