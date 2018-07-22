<#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> Arr,int target) {

	//set stating and ending index
	int start = 0, ending = Arr.size()-1;

	while(start <= ending) {
		// take mid of the list
		int mid = (start + end) / 2;

		// we found a match
		if(Arr[mid] == target) {
			return 1; 
		}
		// go on right side
		else if(Arr[mid] < target) {
			start = mid + 1;
		}
		// go on left side
		else {
			end = mid - 1;
		}
	}
	// element is not present in list
	return 0;
}
int searchMatrix(vector<vector<int> > &A, int B) {
    /*First search row wise */
    for(int i=0;i<r;i++){
    	if(A[i][0]<=B && A[i][c-1]>=B){
    		return binarySearch(A[i],B);
    	}
    }
    return 0;
    /*Now we have the row to be searched in rowEnd*/

}

int main(){
    int n;
    c
 	   
}