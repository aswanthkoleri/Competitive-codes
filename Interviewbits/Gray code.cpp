void graySolve(vector<int> &result,int A,int& num){
    if(A==0){
        result.push_back(num);
        return;
    }
    /*Ignore the current bit */
    graySolve(result,A-1,num);
    /*Invert the current bit */
    num=num^(1<<(A-1));
    graySolve(result,A-1,num);
}
vector<int> Solution::grayCode(int A) {
    vector<int> result;
    int num=0;
    graySolve(result,A,num);
    return result;    
}
