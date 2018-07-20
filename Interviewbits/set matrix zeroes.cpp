void Solution::setZeroes(vector<vector<int> > &A) {
    /* initialize two flags one for row and other for col */
    bool firstRowHasZero=false;
    bool firstColHasZero=false;
    int m=A.size();
    int n=A[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && A[i][j]==0){
                firstRowHasZero=true;
            }
            if(j==0 && A[i][j]==0){
                firstColHasZero=true;
            }
            if(A[i][j]==0){
                A[0][j]=0;
                A[i][0]=0;
            }
        }
    }

    /* Now setting zeroes in all of the cols and rows which are suppose to have zeroes */
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(A[0][j]==0 || A[i][j]==0){
                A[i][j]=0;
            }
        }
    }

    /* Now check first row should be zeroes or not  */
    if(firstRowHasZero){
        for(int i=0;i<n;i++){
            A[0][i]=0;
        }
    }
    /* after that check whether the second row should be complete zeroes or not  */
    if(firstColHasZero){
        for(int i=0;i<m;i++){
            A[i][0]=0;
        }
    }
}
