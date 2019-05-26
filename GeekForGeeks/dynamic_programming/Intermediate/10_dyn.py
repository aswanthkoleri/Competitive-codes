# O-1 Knapsack problem
def knapsack(N,values,weights,W):
    sack=[[0 for i in range(W+1)] for j in range(N+1)]
    for i in range(N+1):
        for j in range(W+1):
            if i==0 or j==0:
                sack[i][j]=0
            elif j<weights[i-1]:
                sack[i][j]=sack[i-1][j]
            else:
                sack[i][j]=max(values[i-1]+sack[i-1][j-weights[i-1]],sack[i-1][j])
    return sack[N][W]

if __name__=="__main__":
# Write the main function here
    # Get value and weights
    N=int(input())
    values=list(map(int,input().split()))
    weights=list(map(int,input().split()))
    W=int(input())
    print(knapsack(N,values,weights,W))