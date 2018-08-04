void make(vector<int> &temp,int curr,int A,int B,vector<vector<int>> &ans){
	if(temp.size()==B){
		ans.push_back(temp);
		return ;
	}else if(curr>A){
		return ;
	}else {
		for(int i=curr;i<=A;i++){
			std::vector<int> t(temp);
			t.push_back(i);
			make(t,i+1,A,B,ans)
		}
	}
}
vector<vector<int>> Solution::combine(int A, int B) {
	std::vector<vector<int>> ans;
	for(int i=1;i<=A;i++){
		vector<int> temp;
		temp.push_back(i);
		make(temp,i+1,A,B,ans);	
}    
return ans;
}
 