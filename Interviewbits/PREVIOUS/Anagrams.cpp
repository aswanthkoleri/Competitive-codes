string sortString(string str){
	std::vector<int> a;
	for(int i=0;i<str.size();i++){
		a.push_back((int)str[i]);
	}
	sort(a.begin(),a.end());
	string temp="";
	for(int i=0;i<a.size;i++){
		temp+=((char)a[i]);
	}
	return temp;
}
vector<vector<int> > Solution::anagrams(const vector<string> &A) {
	/*First sort all the characters in a string according to its ascii values and store it in map */
	map<string,std::vector<int>> m;
	for(int i=0;i<A.size();i++){
		string temp;
		temp=sortString(A[i]);
		m[string].push_back(i+1);
	}
	map<string,std::vector<int>>::iterator it;
	it=m.begin();
	std::vector<std::vector<int>> v;
	while(it!=m.end()){
		v.push_back(it->second);
		it++;
	}
	return v;
}