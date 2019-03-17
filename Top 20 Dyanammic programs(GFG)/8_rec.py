
def f(i,j,ar):
    if i==j:
        return ar[i]
    elif j==i+1:
        return max(ar[i],ar[j])
    else:
        # Two option either select the first one or the last one 
        # And take the maximum out of it
        return max(ar[i]+min(f(i+2,j,ar),f(i+1,j-1,ar)),ar[j]+min(f(i,j-2,ar),f(i+1,j-1,ar)))

def main():
    ar=list(map(int,input().split(" ")))
    # we have to find the maximum value that the user can get 
    print(f(0,len(ar)-1,ar))
main()