
#include<bits/stdc++.h>
using namespace std;
int findMin(int *ar){
	int min=ar[0];
	for(int i=0;i<3;i++){
		if(ar[i]<min){
			min=ar[i];
		}
	}
	return min;
}
vector<int> solve(int A, int B, int C, int D) {
	int initial[3] = {A,B,C};
	int index[3]={0,0,0};
	std::vector<int> final;
	for(int i=0;i<D;i++){
		/*Find the min in Initial */
		
		int m=findMin(initial);
		cout<<m<<endl;
		if(final.size()>0 &&  m!=final.back())
            final.push_back(m);
        else if(final.size()==0){
            final.push_back(m);

        }else{
        	i--;
        }
		if(m==initial[0]){
			initial[0]=final[index[0]]*A;
			index[0]++;
		}else if(m==initial[1]){
			initial[1]=final[index[1]]*B;
			index[1]++;
		}else {
			initial[2]=final[index[2]]*C;
			index[2]++;
		}
	}
	return final;   
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	int A,B,C,D;
	cin>>A>>B>>C>>D;
	std::vector<int> result=solve(A,B,C,D);
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<" ";
	}
	return 0;
}