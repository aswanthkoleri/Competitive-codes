vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++){
        if(i%2==0 && A[i]<=A[i+1]){
            swap(A[i],A[i+1]);
        }
        else if(i%2==1 && A[i]>=A[i+1]){
            swap(A[i],A[i+1]);
        }
    }
    return A;   
}
