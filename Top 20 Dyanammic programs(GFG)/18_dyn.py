# Maintain a table for DP programming Top-down programming
TABLE = []
def dice(m,n,x):
    global TABLE
    if n==0 and x==0:
        return 1
    elif n<0 or x<0:
        return 0
    else:
        summation=0
        for i in range(1,m+1):
            if TABLE[n-1][x-i]:
                summation+=TABLE[n-1][x-i]
            else:
                summation+=dice(m,n-1,x-i)
        TABLE[n][x]=summation
        return summation
def main():
    global TABLE
    [m,n,x] = list(map(int,input().split()))
    TABLE=[[0 for i in range(x+1)] for j in range(n+1)]
    print(dice(m,n,x))
main()  