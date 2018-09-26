/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// you are required to complete this function 
// function should print the required range
#include<vector>
void findSmallestRange(int arr[][N], int n, int k){
   vector<int> m(k,0);	
		int range=INT_MAX;
		int rangeS=0;
		int rangeE=0;
		while(1){
			/*Traverse through all the list. Take the first element of each array and store it in the priority queue*/
		int minV=INT_MAX;
		int minI;
		int maxV=INT_MIN;
			for(int i=0;i<k;i++){
				int first=arr[i][m[i]];
				if(first<minV){
					minV=first;
					minI=i;
				}
				if(first>maxV){
					maxV=first;
				}
			}
			if(maxV-minV<range){
				range=maxV-minV;
				rangeS=minV;
				rangeE=maxV;
			}
			/*Now pop the array having the min element */
			m[minI]++;
			if(m[minI]>=n){
				break;
			}
		}
		cout<<rangeS<<" "<<rangeE<<endl;

}