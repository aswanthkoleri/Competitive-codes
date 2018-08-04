aint Solution::threeSumClosest(vector<int> &A, int B) {
	if(A.size()<3){
		return 0;
	}
	/*Sort the array */
	sort(A.begin(), A.end());
	int leastDigits;
	int minDifference = INT_MAX;
	/*Find i */
	int n=A.size();
	int j,k,i=0;
	while(i<A.size()-2){
		 j=i+1;
		 k=n-1;
		while(k>j){
			int temp = A[i]+A[j]+A[k];
			int diff=abs(temp-B);
			if(diff==0){
				return B;
			}
			if(diff<minDifference){
				minDifference=diff;
				leastDigits=temp;
			}
			if(temp<B){
				j++;
			}else{
				k--;
			}
		}
		i++;
	}
	return leastDigits;

}
