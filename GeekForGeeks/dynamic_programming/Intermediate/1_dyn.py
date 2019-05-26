# Binomial coeffcient
def nCr(n,r):
    # first initailize 2d matrix
    mat=[[1 for i in range(r+1)] for j in range(n+1)]
    for i in range(n+1):
        for j in range(min(i+1,r+1)):
            # Based on the formula nCr = (n-1)C(r-1) + (n-1)C(r)
            # Base case
            if j==0 or j==i:
                mat[i][j]=1
            else:
                mat[i][j]=mat[i-1][j-1]+mat[i-1][j]
    return mat[n][r]
if __name__=="__main__":
# Write the main function here
    # print("Hello")
    [m,n]=list(map(int,input().split()))
    result = ((2*m+1)*nCr(2*n,m+n))/(m+n+1)
    print(int(result))
    
    