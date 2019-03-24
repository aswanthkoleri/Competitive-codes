import sys
# Matrix parenthesization
table=[]
def minMul(ar,i,j):
    if i==j:
        return 0
    if table[i][j]:
        return table[i][j]
    count=sys.maxsize
    for k in range(i,j):
        count=min(count,minMul(ar,i,k)+minMul(ar,k+1,j)+ar[i-1]*ar[k]*ar[j])
    table[i][j]=count
    return count

def main():
    global table
    t=int(input())
    for i in range(t):
        n=int(input())
        ar=list(map(int,input().split()))
        table=[[0 for i in range(len(ar)+1)] for i in range(len(ar)+1)]
        print(minMul(ar,1,n-1))

main()