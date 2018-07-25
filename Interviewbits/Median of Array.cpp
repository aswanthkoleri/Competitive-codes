double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
   double median;
    int n,m;
    n=A.size();
    m=B.size();
    vector<int> c(m+n);
    merge(A.begin(),A.end(),B.begin(),B.end(),c.begin());
    int medianIndex=(n+m)/2;
    if((n+m)%2==0){
        /*If it is even */
        int first=medianIndex-1;
        int second=medianIndex;
        median=((double)c[first]+(double)c[second])/2.0;
    }else{
        median=((double)c[medianIndex]);
    }
    return median;
    
}
