def main():
    # accept n and m
    [n,m]=list(map(int,input().split(" ")))
    # accept the matrix
    a=[input().split(" ") for j in range(n)]
    b=[input().split(" ") for j in range(n)]
    # print(a)
    # print(b)
    # traverse through the matrix
    for i in range(0,n-1):
        for j in range(0,m-1):
            # if there is a 2X2 matrix that is equal then YES
            if a[i][j]==b[i][j] and a[i][j+1]==b[i+1][j] and a[i+1][j] == b[j][i+1] and a[i+1][j+1] == b[i+1][j+1]:
                print("YES")
                return
    print("NO")
main()
