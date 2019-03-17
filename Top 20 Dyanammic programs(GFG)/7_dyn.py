dp=[]
def isThereSubset(n,ar,sumVal):
    global dp
    # Last element can be included in the set or can be exclude
    for i in range(n+1):
        dp[i][0]=True
    for i in range(sumVal+1):
        dp[0][i]=False
    for i in range(n+1):
        for j in range(sumVal+1):
            # exclude in the set
            dp[i][j]=dp[i-1][j]
            if ar[i-1] <= j:
                dp[i][j] |= dp[i-1][j-ar[i-1]]
    # Get all the dp[i] with sumVal
    return dp[n][sumVal]
    
def main():
    global dp
    ar=list(map(int,input().split(" ")))
    sumVal=int(input())
    dp=[[False for i in range(sumVal+1)] for j in range(len(ar)+1)]
    print(isThereSubset(len(ar),ar,sumVal))
main()