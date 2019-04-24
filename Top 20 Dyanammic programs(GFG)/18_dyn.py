# Maintain a table for DP programming Top-down programming
TABLE = []
def dice(m,n,x):
    global TABLE
    TABLE[0][0]=1
    for j in range(1,min(m+1,x+1)): #Table entries for only one dice 
        TABLE[1][j]=1
    for i in range(2,n+1): 
        for j in range(1,x+1): 
            for k in range(1,min(m+1,j)): 
                TABLE[i][j]+=TABLE[i-1][j-k]
    return TABLE[-1][-1] #This is the last element being denoted in python
 

def main():
    global TABLE
    [m,n,x] = list(map(int,input().split()))
    TABLE=[[0 for i in range(x+1)] for j in range(n+1)]
    print(dice(m,n,x))
main()  