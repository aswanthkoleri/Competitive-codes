#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		std::vector<int> xc(3,0);
		std::vector<int> xr(3,0);
		int X=0;
		int O=0;
		int up=0,low=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				char in;
				cin>>in;
				if(in=='O'){
				xc[j]++;
				xr[i]++;
				if(i==j){
					low++;
				}
				if(i==2-j){
					up++;
				}
				O++;
			}else{
				X++;
			}
			}
		}
		if((X-O)!=1){
			cout<<"Invalid"<<endl;
		}else {
		    /*X CAN WIN IN THE INPUT BUT O CANNOT WIN */
			int flag1=0;
			for(int i=0;i<3;i++){
				/*Check column wise */
				if(xc[i]==3 || xr[i]==3 || up==3 || low==3 ){
						flag1=1;
				}
			}
			if(flag1==1){
				cout<<"Invalid"<<endl;
			}else {
				cout<<"Valid"<<endl;
			}
		}
	}
	return 0;
}