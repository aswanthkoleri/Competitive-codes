# O-1 Knapsack problem
def knapsack(N,values,weights,W):
    if N==0 or W==0:
        return 0
    if weights[N-1]>W:
        return knapsack(N-1,values,weights,W)
    else:
        return max(values[N-1] + knapsack(N-1,values,weights,W-weights[N-1]), knapsack(N-1,values,weights,W))

if __name__=="__main__":            
# Write the main function here
    # Get value and weights
    N=int(input())
    values=list(map(int,input().split()))
    weights=list(map(int,input().split()))
    W=int(input())
    print(knapsack(N,values,weights,W))