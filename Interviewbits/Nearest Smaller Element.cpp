
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int* prevSmaller(int* A, int n1){
    for(int i=0;i<n1;i++){
        len1[i]=-1;
    }
    /*for(int i=0;i<n1;i++){
        cout<<len1[i]<<" ";
    }*/
    len1[0]=-1;
    s.push(0);
    for(int i=1;i<n1;i++){
    	int flag=0;
        while(!s.empty()){

            int j=s.top();
            s.pop();
            if(A[j]<A[i]){
                len1[i]=A[j];
                flag=1;
                break;
            }
        }
        if(flag==0){
        	if(len1[i-1]<A[i]){
        		len1[i]=len1[i-1];
        	}
        }
        s.push(i);
    }
    return len1;
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
    int A[n];
    for(int i=0;i<n;i++){
    	cin>>A[i];
    }
   /* for(int i=0;i<n;i++){
    	cout<<A[i]<<" ";
    }*/
   	int* G=prevSmaller(A,n);
   	for(int i=0;i<n;i++){
   		cout<<G[i]<<" ";
   	}
}
