def check(i,j):
    if(i>=0 and i<5) and (j>=0 and j<5):
        return True

def mark(ar,i,j,maximum):
    ar[i][j]=-1
    print(maximum)
    print(str(i)+" "+str(j))
    print("++++++")
    # down
    if check(i+1,j) and ar[i+1][j]==1 :
        maximum+=1
        maximum=mark(ar,i+1,j,maximum)
    # down right
    if check(i+1,j+1) and ar[i+1][j+1]==1 :
        maximum+=1
        maximum=mark(ar,i+1,j+1,maximum)
    # right
    if check(i,j+1) and ar[i][j+1]==1 :
        maximum+=1
        maximum=mark(ar,i,j+1,maximum)
    # up
    if check(i-1,j) and ar[i-1][j]==1 :
        maximum+=1
        maximum=mark(ar,i-1,j,maximum)
    # left
    if check(i,j-1) and ar[i][j-1]==1 :
        maximum+=1
        maximum=mark(ar,i,j-1,maximum)
    # down left
    if check(i+1,j-1) and ar[i+1][j-1]==1 :
        maximum+=1
        maximum=mark(ar,i+1,j-1,maximum)
    # up left
    if check(i-1,j-1) and ar[i-1][j-1]==1 :
        maximum+=1
        maximum=mark(ar,i-1,j-1,maximum)
    # up right
    if check(i-1,j+1) and ar[i-1][j+1]==1 :
        maximum+=1
        maximum=mark(ar,i-1,j+1,maximum)
    # ar[i][j]=1
    return maximum

def main():
    ar=[[1,1,0,0,0],
    [0,1,1,0,0],
    [0,0,1,0,1],
    [1,0,0,0,1],
    [0,1,0,1,1]]

    result=0
    for i in range(5):
        for j in range(5):
            if ar[i][j]==1:
                maximum=1
                maximum=mark(ar,i,j,maximum)
                result=max(result,maximum)
    print(result)
main()
