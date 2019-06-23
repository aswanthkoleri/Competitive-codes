if __name__=="__main__":
# Write the main function here
    # Accept n and ar
    n=int(input())
    ar=list(map(int,input().split()))
    p=sorted(ar)
    # print(p)
    k=1
    i=0
    count=0
    while i<n:
        # print(i,p[i])
        if p[i] >= k:
            p[i]=0
            count+=1
            k+=1
        else:
            i+=1
    print(count)
        
