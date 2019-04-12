def coin(ar,n,val):
    # Make a table
    # first index -> val
    # Second index -> No of elements
    # initialize the table
    table = [[0 for i in range(n+1)] for j in range(val+1)]
    # for value zero the table value is 1
    for i in range(n):
        table[0][i]=1

    for i in range(1,val+1):
        for j in range(n):
            # including the coin
            if i-ar[j]>=0:
                table[i][j]+=table[i-ar[j]][j]
            # Excluding the coin
            if j-1>=0:
                table[i][j]+=table[i][j-1]
    return table[val][n-1]
def main():
    # value
    N=int(input())
    # Array
    s=list(map(int,input().split()))
    print(coin(s,len(s),N))
main()
