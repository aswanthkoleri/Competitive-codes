vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int maxElement=*max_element(A.begin(),A.end());
    long long int n=A.size();
    long long int sum=((n)*(n+1))/2;
    long long int actualSum=0;
    long long int sqActualSum=0;
    for(long long int i=0;i<n;i++){
        actualSum+=(long long )A[i];
        sqActualSum+=((long long )A[i]*(long long )A[i]);
    }
    long long int sqSum=(n*(n+1)*(2*n+1))/6;
    long long int difference=sum - actualSum;
    long long int sqDifference=sqSum - sqActualSum;
    long long bPlusA=(sqDifference/difference);
    long long int  b=(difference+bPlusA)/2;
    long long int a=(-difference+bPlusA)/2;
    vector<int> res;
    res.push_back(a);
    res.push_back(b);
    return res;
    
}
