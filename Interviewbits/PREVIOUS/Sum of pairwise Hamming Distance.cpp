
int Solution::hammingDistance(const vector<int> &A) {
     long long int sum=0;
     for(long long int i=0;i<32;i++){
         /*Find the no of elements with ith bit set */
         long long int count =0;
         for(long long int j=0;j<A.size();j++){
             if( A[j] & (1<<i) ){
                 count++;
             }
         }
         sum+=count*(A.size()-count)*2;
     }
     
    return (sum)%1000000007;
}
