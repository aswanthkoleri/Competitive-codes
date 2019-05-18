if __name__=="__main__":
# Write the main function here
    n=int(input())
    ar=input()
    ar=list(ar)
    count=0
    # if n%2!=0:
        # count+=1
    # for i in range(0,n,2):
    i=0
    while i+1<n:
        if ar[i]==ar[i+1]:
            ar.pop(i+1)
            count+=1
            n-=1
        else:
            i+=2
    if n%2!=0:
        # remove last item
        ar.pop(n-1)
        count+=1
    print(count)
    p=""
    print(p.join(ar))        

    