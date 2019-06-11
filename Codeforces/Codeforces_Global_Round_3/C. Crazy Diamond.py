def crazyDiamond(n,A):
    # Do bubble sort
    # Condition: 2*abs(i-j)>=n
    for i in range(n):
        for j in range(i+1,n):
            if A[i]>A[j] and 2*abs(j-i)>=n:
                print(i+1,j+1)
                A[i],A[j]=A[j],A[i]
    print(A)
if __name__=="__main__":
# Write the main function here
    A=list(map(int,input().split()))
    crazyDiamond(len(A),A)
