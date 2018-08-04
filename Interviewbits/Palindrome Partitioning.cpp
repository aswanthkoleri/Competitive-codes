bool isPalindrome(string str,int start,int end){
	while(start<end){
		if(str[start]!=str[end]){
			return false;
		}
		start++;
		end--;
	}
	return true;
}
void solve(vector<string> temp,int start,int len,vector<vector<string>> &result,string A){
	if(start>=len){
		result.push_back(temp);
		return;
	}
	/*Extract the substring and check if the substring is palindrome or not */
		for(int i=start;i<len;i++){
   		if(isPalindrome(A,start,i)){
   			/*If palindrome then push that substring */
   			temp.push_back(A.substr(start,i-start+1));

   			/*Then do the recursion part where we will check the rest of the string for palindrome */
   			solve(temp,i+1,len,result,A);
   			/*Pop the item which we pushed earlier */
   			temp.pop_back();
   		}
   	}

}
vector<vector<string> > Solution::partition(string A) {
   	vector<vector<string>> result;
   	vector<string> temp;
   	int start=0;
   	int len=A.size();
   	solve(temp,start,len,result,A);
   	return result;
}
