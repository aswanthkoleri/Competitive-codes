def main():
    # accept n
    n=int(input())
    matrix=[]
    for _ in range(n):
        row=list(input())
        matrix.append(row)
    # print(matrix)
    # now find the crosses
    count=0
    for i in range(1,n):
        for j in range(1,n-1):

            if i-1 >=0 and j-1>=0 and i+1<n  and j+1<n and matrix[i][j]=='X' and matrix[i-1][j-1]=='X' and matrix[i+1][j+1] == 'X' and matrix[i-1][j+1]=='X' and matrix[i+1][j-1]=='X':
                count+=1
    print(count)
    return
main()