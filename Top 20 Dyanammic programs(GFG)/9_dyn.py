k=[]
def knapsack(v,wt,W,n):
    global k
    for i in range(n+1):
        for j in range(W+1):
            # print(i,j)
            if i==0 or j==0:
                k[i][j]=0
            elif wt[i-1]>W:
                k[i][j]=k[i-1][j]
            else:
                # 1. item can be added 
                # 2. item cannot be added 
                # Take the the one which gives maximum value 
                k[i][j]=max(v[i-1]+k[i-1][j-wt[i-1]],k[i-1][j])
    return k[n][W]

def main():
    global k
    v=list(map(int,input().split(" ")))
    wt=list(map(int,input().split(" ")))
    W=int(input())
    k=[[0 for i in range(W+1)] for j in range(len(v)+1)]
    print(knapsack(v,wt,W,len(v)))
    
main()