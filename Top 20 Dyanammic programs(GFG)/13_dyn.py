dp=[]
def partiton(ar,n,summation):
    for i in range(1,n+1):
        dp[0][i]=True
    for i in range(1,int(summation/2)+1):
        dp[i][0]=False
    for i in range(1,int(summation/2)+1):
        for j in range(1,n+1):
            # 2. Do not include
            dp[i][j]=dp[i][j-1]
            # 1. include that element in the new set
            if i>=ar[j-1]:
                dp[i][j]|=dp[i-ar[j-1]][j-1]
    return dp[int(summation/2)][n] 

def main():
    ar=list(map(int,input().split()))
    
    global dp
    dp=[[True for i in range(len(ar)+1)] for i in range(sum(ar)+1)]
    if sum(ar)%2!=0:
        print("False")
    else:
        print(partiton(ar,len(ar),sum(ar)))

main()