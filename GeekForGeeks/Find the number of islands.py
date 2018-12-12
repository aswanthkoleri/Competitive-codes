''' Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above. '''

# your task is to complete this function
# Your function should return an integer
count=0
def check(arr,i,j,m,n):
    if(i>=0 and i<m) and (j>=0 and j<n) and arr[i][j]:
        return True

def dfs(arr,i,j,m,n):
    arr[i][j]=-1
    flag=0
    if check(arr,i+1,j,m,n) and arr[i+1][j]==1 :
        flag=1
        dfs(arr,i+1,j,m,n)
    # down right
    if check(arr,i+1,j+1,m,n) and arr[i+1][j+1]==1 :
        flag=1
        dfs(arr,i+1,j+1,m,n)
    # right
    if check(arr,i,j+1,m,n) and arr[i][j+1]==1 :
        flag=1
        dfs(arr,i,j+1,m,n)
    # up left
    if check(arr,i-1,j-1,m,n) and arr[i-1][j-1]==1 :
        flag=1
        dfs(arr,i-1,j-1,m,n)
    # up right
    if check(arr,i-1,j+1,m,n) and arr[i-1][j+1]==1 :
        flag=1
        dfs(arr,i-1,j+1,m,n)
    # up
    if check(arr,i-1,j,m,n) and arr[i-1][j]==1 :
        flag=1
        dfs(arr,i-1,j,m,n)
    # left
    if check(arr,i,j-1,m,n) and arr[i][j-1]==1 :
        flag=1
        dfs(arr,i,j-1,m,n)
    # down left
    if check(arr,i+1,j-1,m,n) and arr[i+1][j-1]==1 :
        flag=1
        dfs(arr,i+1,j-1,m,n)
    # up left
    if check(arr,i-1,j-1,m,n) and arr[i-1][j-1]==1 :
        flag=1
        dfs(arr,i-1,j-1,m,n)
    # up right
    if check(arr,i-1,j+1,m,n) and arr[i-1][j+1]==1 :
        flag=1
        dfs(arr,i-1,j+1,m,n)
    return 

def findIslands(arr, n, m):
    count=0
    for i in range(n):
        for j in range(m):
            if arr[i][j]==1:
                dfs(arr,i,j,n,m)
                count+=1
    return count
    # Code here
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        matrix = [[0 for i in range(n[1])]for j in range(n[0])]
        c=0
        for i in range(n[0]):
            for j in range(n[1]):
                matrix[i][j] = arr[c]
                c+=1
        print(findIslands(matrix, n[0], n[1]))
# Contrubuted By: Harshit Sidhwa
