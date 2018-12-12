def check(i,j):
    if(i>=0 and i<4) and (j>=0 and j<5):
        return True

def dfs(ar,i,j,max):
    # For all the adjacent nodes apply dfs
    curr=max
    if check(i+1,j) and ar[i+1][j]==1 :
        ar[i+1][j]=-1
        max+=1
        curr=dfs(ar,i+1,j,max)
        max-=1
        ar[i+1][j]=1
    # down right
    if check(i+1,j+1) and ar[i+1][j+1]==1 :
        ar[i+1][j+1]=-1
        max+=1
        curr=dfs(ar,i+1,j+1,max)
        max-=1
        ar[i+1][j+1]=1
    # right
    if check(i,j+1) and ar[i][j+1]==1 :
        ar[i][j]=-1
        max+=1
        curr=dfs(ar,i,j+1,max)
        max-=1
        ar[i][j+1]=1
    # up
    if check(i-1,j) and ar[i-1][j]==1 :
        ar[i-1][j]=-1
        max+=1
        curr=dfs(ar,i-1,j,max)
        max-=1
        ar[i-1][j]=1
    # left
    if check(i,j-1) and ar[i][j-1]==1 :
        ar[i][j-1]=-1
        max+=1
        curr=dfs(ar,i,j-1,max)
        max-=1
        ar[i][j-1]=1
    # down left
    if check(i+1,j-1) and ar[i+1][j-1]==1 :
        ar[i+1][j-1]=-1
        max+=1
        curr=dfs(ar,i+1,j-1,max)
        max-=1
        ar[i+1][j-1]=1
    # up left
    if check(i-1,j-1) and ar[i-1][j-1]==1 :
        ar[i-1][j-1]=-1
        max+=1
        curr=dfs(ar,i-1,j-1,max)
        max-=1
        ar[i-1][j-1]=1
    # up right
    if check(i-1,j+1) and ar[i-1][j+1]==1 :
        ar[i-1][j+1]=-1
        max+=1
        curr=dfs(ar,i-1,j+1,max)
        max-=1
        ar[i-1][j+1]=1
    if curr>max:
        return curr
    else:
        return max

def main():
    ar=[[0,0,1,1,0],
    [1,0,1,1,0],
    [0,1,0,0,0],
    [0,0,0,0,1]]
    max=0
    for i in range(4):
        for j in range(5):
            ans=0   
            if ar[i][j]==1:
                max+=1
                ar[i][j]=-1
                ans=dfs(ar,i,j,max)
                max-=1
                ar[i][j]=1
            if ans>max:
                max=ans
    print(max)
main()
    
            

