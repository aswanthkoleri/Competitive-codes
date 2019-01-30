def check(arr,i,j,m,n):
    if(i>=0 and i<m) and (j>=0 and j<n) and arr[i][j]:
        return True

def dfs(i,j,mat,m,n,maximum):
    mat[i][j]=-1
    if check(mat,i+1,j,m,n) and mat[i+1][j]==1 :
        maximum=dfs(i+1,j,mat,m,n,maximum+1)
    # down right
    if check(mat,i+1,j+1,m,n) and mat[i+1][j+1]==1 :
        maximum=dfs(i+1,j+1,mat,m,n,maximum+1)
    # right
    if check(mat,i,j+1,m,n) and mat[i][j+1]==1 :
        maximum=dfs(i,j+1,mat,m,n,maximum+1)
    # up left
    if check(mat,i-1,j-1,m,n) and mat[i-1][j-1]==1 :
        maximum=dfs(i-1,j-1,mat,m,n,maximum+1)
    # up right
    if check(mat,i-1,j+1,m,n) and mat[i-1][j+1]==1 :
        maximum=dfs(i-1,j+1,mat,m,n,maximum+1)
    # up
    if check(mat,i-1,j,m,n) and mat[i-1][j]==1 :
        maximum=dfs(i-1,j,mat,m,n,maximum+1)
    # left
    if check(mat,i,j-1,m,n) and mat[i][j-1]==1 :
        maximum=dfs(i,j-1,mat,m,n,maximum+1)
    # down left
    if check(mat,i+1,j-1,m,n) and mat[i+1][j-1]==1 :
        maximum=dfs(i+1,j-1,mat,m,n,maximum+1)
    # up left
    if check(mat,i-1,j-1,m,n) and mat[i-1][j-1]==1 :
        maximum=dfs(i-1,j-1,mat,m,n,maximum+1)
    # up right
    if check(mat,i-1,j+1,m,n) and mat[i-1][j+1]==1 :
        maximum=dfs(i-1,j+1,mat,m,n,maximum+1)
    return maximum

def main():
    row=int(input())
    col=int(input())
    mat=[]
    for i in range(row):
        inp=input().split(" ")
        arr=[int(i) for i in inp]
        mat.append(arr)
    # print(mat)
    result=0
    for i in range(row):
        for j in range(col):
            maximum=0
            if mat[i][j]==1:
                maximum=dfs(i,j,mat,row,col,maximum+1)
                result=max(result,maximum)
    print(result)
            

main()
        