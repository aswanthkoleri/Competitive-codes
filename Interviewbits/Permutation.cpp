void solve(vector<int> &temp,int *h,int len,vector<int> A,vector<vector<int>> &result){
    if(temp.size()==len){
        result.push_back(temp);
        return;
    }else{
        for(int i=0;i<len;i++){
            if(h[i]==0){
            temp.push_back(A[i]);
            h[i]=1;
            solve(temp,h,len,A,result);
            temp.pop_back();
            h[i]=0;
            }
        }
    }
}
vector<vector<int>> Solution::permute(vector<int> &A) {
    /*First we have to make a recursive fucntion */
    vector<vector<int>> result; 
    int len=A.size();
    int h[len];
    for(int i=0;i<len;i++){
        h[i]=0;
    }
    vector<int> temp;
    solve(temp,h,len,A,result);
    return result;
}
