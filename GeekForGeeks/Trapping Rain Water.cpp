/*Trapping Rain Water */
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}
		int left[n];


    int water = 0;
 

    left[0] = ar[0];
    for (int i = 1; i < n; i++)
       left[i] = max(left[i-1], ar[i]);

    right[n-1] = ar[n-1];
    for (int i = n-2; i >= 0; i--)
       right[i] = max(right[i+1], ar[i]);
 
  
    for (int i = 0; i < n; i++)
       water += min(left[i],right[i]) - ar[i];
   cout<<water<<endl;
	}
	return 0;
}