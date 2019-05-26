int Solution::colorful(int A) {
	/*Decalare a map*/
	unordered_map<int,bool> hash;   
	/*Convert A to string */
	string str=to_string(A);
	/*Find all the substrings */
	int len=str.size();
	for(int i=0;i<len;i++){
		int mul=1;
		for(int j=i;j<len;j++){
			mul*=stoi(str[j]);
			if(hash.find(mul)!=hash.end()){
				return 0;
			}else{
				hash[str[i]]=true;
			}
		}
	}
	return 1;
}
