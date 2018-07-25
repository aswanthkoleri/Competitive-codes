int Solution::singleNumber(const vector<int> &A) {
	int result;/*Stores the number which has single occurence*/
	for(int i=0;i<A.size();i++){
		result^=A[i]; /* XOR operation with all the elements in the array*/
		/*Twice occuring numbers cancel out to zero and the result contains the single occurence number*/
	}

	return result;
}
