vector<int> Solution::maxone(vector<int> &A, int B) {
    std::vector<int> temp;
    int l=0,r=0;
    int zeroCount=0;
    int n=A.size();
    while(r<n){
        if(zeroCount<=B){
            if(A[r]==0){
                zeroCount++;
            }
            r++;
        }
        if(zeroCount>B){
            if(A[l]==0){
                zeroCount--;
            }
            l++;
        }
    }
    for(int i=l;i<=r;i++){
        temp.push_back(A[i]);
    }
    return temp;

}
