int Solution::bulbs(vector<int> &A) {
    int n=A.size();
    int state=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]==state){
            count++;
            state=1-state;
        }
    }
    return count;
}
