def main():
    [n,k]=list(map(int,input().split(" ")))
    # find the no of moves.
    left=k-1
    right=n-k
    minimum=min(left,right)
    moves=n-1+minimum
    print(moves+n+n+1)
main()
