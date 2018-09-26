#include<bits/stdc++.h>
using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition (int A[],int D[], int low, int high) 
{ 
    int pivot = A[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (A[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&A[i], &A[j]); 
            swap(&D[i], &D[j]); 
        } 
    } 
    swap(&A[i + 1], &A[high]);
    swap(&D[i + 1], &D[high]);
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int A[],int D[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(A,D,low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(A,D, low, pi - 1); 
        quickSort(A,D, pi + 1, high); 
    } 
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int A[n];
		int D[n];
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		for(int i=0;i<n;i++){
			cin>>D[i];
		}
		for(int i=0;i<n;i++){
			cout<<A[i]<<"----"<<D[i]<<endl;
		}
		quickSort(D,A,0,n-1);
		cout<<"After sort"<<endl;
		for(int i=0;i<n;i++){
			cout<<A[i]<<"----"<<D[i]<<endl;
		}

		for(int i=0;i<n;i++){
			if(D[i]<A[i]){
				D[i]+=2400;
			}
		}
		int count=1,minP=1,prevD=D[0],prevA=A[0];
		for(int i=1;i<n;i++){
			if(A[i]<prevD && A[i]>prevA ){
				count++;
				cout<<"Run"<<i<<" "<<count<<endl;
			}else{
				count=1;
			}
			if(D[i]>prevD){
				prevD=D[i];
			}
			prevA=A[i];
			if(count>minP){
				minP=count;
				/*cout<<minP<<endl;*/
			}
		}
		cout<<minP<<endl;
	}
	return 0;
}