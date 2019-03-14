# dynammic programming can be done by bottom-up programming
dp=[]
def findmin(ar,n,sumofar):
    # do the initializations
    # excluding all numbers we can form 0
    for i in range(n+1):
        dp[i][0]=True
    # except dp[0][0] with no elements none of the sums are possible
    for i in range(1,sumofar+1):
        dp[0][i]=False
    # Now the main thing happens
    for i in range(1,n+1):
        for j in range(1,sumofar+1):
            # excluding the ith element
            dp[i][j]=dp[i-1][j]
            if ar[i-1]<=j:
                # including the ith element
                dp[i][j]|=dp[i-1][j-ar[i-1]]
    diff=0
    for i in range(int(sumofar/2),-1,-1):
        if dp[n][i]==True:
            diff=sumofar - 2*i
            break
    return diff    
    

def main():
    global dp
    #  accept array 
    ar=list(map(int,input().split(" ")))
    sumofar=sum(ar)
    dp=[[False for i in range(sumofar+1)] for j in range(len(ar)+1)]
    print(findmin(ar,len(ar),sumofar))
main()
