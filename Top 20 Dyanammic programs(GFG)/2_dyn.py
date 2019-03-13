# Using dynamic programming Time comp:O(n) and Space comp : O(n)
def main():
    # accept array
    ar=list(map(int,input().split(" ")))
    # Now find the longest contigous subseq
    m=[0]*(len(ar)+1)
    if ar[0]>0:
        m[0]=ar[0]
    else:
        m[0]=0
    for i in range(1,len(ar)):
        if ar[i]+m[i-1]>0:
            m[i]=m[i-1]+ar[i]
        else:
            m[i]=0
        # print(m[i])
    # Found the array of sum of subsequences 
    # Now find the maximum 
    print(max(m))
main()