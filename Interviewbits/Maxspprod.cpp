vector<int> leftGreatestNumberIndex(vector< int> &A){
    int n = A.size();
    vector< int> leftGreatestIndex(n,0);
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        /* IF stack is not empty and the current element is the greater than the element situated at the index on the top of the stack  */
        while(!s.empty() && A[i] > A[s.top()] ){
            /* Then that element is the nearest left greatest */
            /* So store its index in the leftGreatestIndex array */
            int r = s.top();
            s.pop();
            leftGreatestIndex[r] = i;
            /* Here the Index of the left greatest number with nearest Index is stored */
        }
        /* If stack is empty */
        s.push(i);
    }
    return leftGreatestIndex;
}

vector< int> rightGreatestNumberIndex(vector< int> &A){
    int n = A.size();
    vector< int> rightGreatestIndex(n,0);
    stack<int> s;
    for(int i=0;i<n;i++){
        /* IF stack is not empty and the current element is the greater than the element situated at the index on the top of the stack  */
        while(!s.empty() && A[i] > A[s.top()] ){
            /* Then that element is the nearest right greatest */
            /* So store its index in the rightGreatestIndex array */
            int r = s.top();
            s.pop();
            rightGreatestIndex[r] = i;
            /* Here the Index of the right greatest number with nearest Index is stored */
        }
        /* If stack is empty */
        s.push(i);
    }
    return rightGreatestIndex;
}

long long int Solution::maxSpecialProduct(vector<int> &A) {
    vector<int> leftGreatestNumberIndexes = leftGreatestNumberIndex(A);
    vector<int> rightGreatestNumberIndexes = rightGreatestNumberIndex(A);
   long long  int maxValue=0;
    for(int i=0;i<A.size();i++){
       long long  int specialProduct=(long)leftGreatestNumberIndexes[i]*(long)rightGreatestNumberIndexes[i];
            if(specialProduct > maxValue )
            {
                maxValue =specialProduct;
            }
    }
    return maxValue;
}
