import sys
# Matrix parenthesization
minOps=[]
def minMul(ar,i,j,n):
    for i in range(n):
        minOps[i][i]=0
    for l in range(2,n):
        for i in range(1,n-l+1):
            j=i+l-1
            minOps[i][j]=sys.maxsize
            for k in range(i,j):
                q=minOps[i][k]+minOps[k+1][j]+ar[i-1]*ar[k]*ar[j]
                if q<minOps[i][j]:
                    minOps[i][j]=q
    return minOps[1][n-1]


def main():
    global minOps
    t=int(input())
    for i in range(t):
        n=int(input())
        ar=list(map(int,input().split()))
        minOps=[[0 for i in range(n)] for i in range(n)]
        print(minMul(ar,1,n-1,n))

main()