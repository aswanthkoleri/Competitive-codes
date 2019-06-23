#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
 	int day = 0;
 	cin>>n>>m;
 	/*cout<<"Hello";
 	cout<<n<<m;*/
 	while(n>0){
 		day++;
 		if(day%m==0){
 			n++;
 			n--;
 		}
 		else{
 			n--;
 		}
 	}
 	cout<<day;
 	return 0;
}