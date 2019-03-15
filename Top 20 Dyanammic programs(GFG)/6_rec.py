dp=[]
# maintain a table to mark whether a particular element is visited or not and each value in the table corresponds to the 
def count(i,j,mat,n):
    # flag=0
    # print(i,j)
    if not(i<n and j <n and i >=0 and j>=0):
        return 0
    if dp[i][j]!=-1:
        return dp[i][j]
    if i+1<n and mat[i][j]-mat[i+1][j]==-1:
        dp[i][j]=1+count(i+1,j,mat,n)
        return dp[i][j]
    if j+1<n and mat[i][j]-mat[i][j+1]==-1:
        dp[i][j]=1+count(i,j+1,mat,n)
        return dp[i][j]
    if i-1>0 and mat[i][j]-mat[i-1][j]==-1:
        dp[i][j]=1+count(i-1,j,mat,n)
        return dp[i][j]
    if j-1>0 and  mat[i][j]-mat[i][j-1]==-1:
        dp[i][j]=1+count(i,j-1,mat,n)
        return dp[i][j]
    if dp[i][j]==-1:
        return 1
    

def main():
    t=int(input())
    global dp
    for _ in range(t):
        # order 
        n=int(input())
        # accept matrix
        ar=list(map(int,input().split(" ")))
        k=0
        # print(ar)
        mat=[[0 for i in range(n)] for j in range(n)]
        dp=[[-1 for i in range(n)] for j in range(n)]
        for i in range(0,n):
            for j in range(0,n):
                # print(i,j)
                mat[i][j]=ar[k]
                k+=1
        # print(mat,n)
        maximum=0
        for i in range(n):
            for j in range(n):
                # if dp[i][j] is not found:
                if dp[i][j]==-1:
                    dp[i][j]=count(i,j,mat,n)
                    if maximum<dp[i][j]:
                        maximum=dp[i][j]
        print(maximum)

main()
