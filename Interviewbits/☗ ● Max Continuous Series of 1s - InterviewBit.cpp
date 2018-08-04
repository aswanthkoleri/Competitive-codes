#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> maxone(vector<int> &A, int B) {
/*First have a current vector */
	std::vector<int> current,newer;
	/*Run a loop*/
	
for(int j=0;j<A.size();j++){
	int count=B;
	for(int i=j;i<A.size();i++){
		if(A[i]==1){
			/*cout<<"t";*/
			current.push_back(i);
		}else if(A[i]==0 && count>0){
			 current.push_back(i);
			 count--;
			/* cout<<"Hell";*/
		}else if(A[i]==0 && count<=0){
			break;
			/*cout<<"Hoho";*/
		}
	}
	/*cout<<current.size()<<endl;*/
	if(current.size()>newer.size()){
				newer=current;
				/*cout<<"Suck";*/
	}
	current.clear();
}
	return newer;
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
    std::vector<int> A;
    for(int i=0;i<n;i++){
    	int k;
    	cin>>k;
    	A.push_back(k);
    }
    int B;
    cin>>B;
    std::vector<int> res=maxone(A,B);
   	for(int i=0;i<res.size();i++){
   		cout<<res[i]<<" ";
   	}

   	return 0;
}



