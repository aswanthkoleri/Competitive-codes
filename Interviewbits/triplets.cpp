
#include <bits/stdc++.h>
using namespace std;
vector<int> findTriplet(int arr[], int n);
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        vector<int> res = findTriplet(arr, n);
        if(res.size()!=3){
        	cout<<"-1";
        }
	    else{
	        sort(res.begin(), res.end());
	        if(res[0]+res[1]==res[2])
	            cout<<"1";
	        else
	             cout<<"0";
	    }
    }
	return 0;


}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

// function should return the triplet
// in a vector container defined as "vector<int> result"
// use result.push_back() to insert elements in the 
// container
// if no such triplet is found, 
// return the container result as empty
// Note: container should be contain 3 elements or 0 elements only.
vector<int> findTriplet(int arr[], int n)
{
    vector<int> result;
   	sort(arr,arr+n,greater<int>());
   	int flag=0;
    for(int i=0;i<n-2;i++){
    	int sum=arr[i];
    	int j=i+1;
    	int k=n-1;
    	while(j<k){
    		if(arr[j]+arr[k]==sum){
    			result.push_back(arr[k]);
    			result.push_back(arr[j]);
    			result.push_back(sum);
    			flag=1;
    			break;
    		}
    		else if(arr[j]+arr[k]<sum){
    			k--;
    		}
    		else if(arr[j]+arr[k]>sum){
    			j++;
    		}
    	}
    	if(flag==1){
    		break;
    	}	
    }
    return result;
}