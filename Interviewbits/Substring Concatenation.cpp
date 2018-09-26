vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    /*First we have to make a hash table for all the elements in B*/
    unordered_map<string,int> m;
    for(int i=0;i<B.size();i++){
        m[B[i]]++;
    }
    std::vector<int> v;
    /*Now traverse through the whole string A to find all the substrings of length B[0].size()*/
    int sizeOfword=B[0].size();
    int sizeOfList=sizeOfword*(B.size());
    int sizeOfString=A.size();
    if(sizeOfList>sizeOfString)
    return v;
    for(int i=0;i<=sizeOfString-sizeOfList;i++){
        unordered_map<string,int> temp(m);
        int j=i;
        while(j<i+sizeOfList){
            string word=A.substr(j,sizeOfword);
            /*Check whether the word is inside the  map*/
            if(temp.find(word)==temp.end()){
                break;
            }else{
                temp[word]--;
            }
            j+=sizeOfword;
        }
        /*Now check whether the hasmap values are empty or not */
        int flag=0;
        for(auto it=temp.begin();it!=temp.end();it++){
            if(it->second>0){
                flag=1;
            }
        }
        if(flag==0){
            v.push_back(i);
        }
    }
    return v;

}
