int Solution::lengthOfLongestSubstring(string A) {
	unordered_map<char,int> m;
	/*Iterate through the string */
	int len=A.size();
	int count=1;
	int max=1;
	for(int i=0;i<len;i++){
		m[A[i]]=-1;
	}
	int prevIndex;
	m[A[0]]=0;
	for(int i=1;i<len;i++){
		prevIndex=m[A[i]];
		if(prevIndex==-1 || i-count>prevIndex){
			/*Increment the count */
			count++;
		}else{
			/*Then count needs to be reset */
			if(count>max){
			max=count;
		}
			count=i-prevIndex;
		}
		m[A[i]]=i;
	}
	if(count>max){
			max=count;
		}
	return max;
}
