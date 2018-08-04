#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
 	string str;
 	cin>>n;
 	cin>>str;
 	int flag;
 	for(int i=65;i<=90;i++){
 		flag=0;
 		for(int j=0;j<str.length();j++){
 			int no = str[j];
 			/*cout<<no<<endl;
*/ 			if(no == i || no == i+32 ){
 				flag = 1;
 				/*cout<<str[j];*/
 				break;
 			}
 		}
 		if(flag == 0 ){
 			break;
 		}
 	}
 	if(flag==0){
 		cout<<"NO";
 	}else{
 		cout<<"YES";
 	}
 
 	return 0;
 }

