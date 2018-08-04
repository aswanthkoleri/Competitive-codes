int Solution::findMinXor(vector<int> &A) {
	sort(A.begin(), A.end());
	int minValue=INT_MAX;
	int xorValue;
	for(int i=0;i<A.size()-1;i++){
		xorValue=A[i]^A[i+1];
		minValue=min(minValue,xorValue); 
	}
	return minValue;
}
