#include <iostream>
using namespace std;

int main() {
	int t;	
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int max = a*b;
		if(a+b>max){
			max=a+b;
		}
		if(a-b>max){
			max=a-b;
		}
		if(b!=0 && a/b > max){
			max=a/b;
		}

		if(b==0 ){
			cout<<"inf";
		}else{
		cout<<max;
		}
		cout<<endl;
	}
	return 0;
}