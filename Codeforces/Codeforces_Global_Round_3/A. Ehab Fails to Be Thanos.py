if __name__=="__main__":
# Write the main function here
    n=int(input())
    # accept the array
    ar=list(map(int,input().split()))
    # SOrt the first part
    first=ar[0:n]
    second=ar[n:]
    # print(first,second)
    setA=set(first)
    setB=set(second)
    # print(setA,setB)
    listA=list(setA)
    listB=list(setB)
    # print(listA[0])
    if len(listA)==1 and len(listB)==1 and listA[0]==listB[0]:
        print(-1)
    else:
        # Check whether the sum of first and second are same
        if sum(first)!=sum(second):
            new=first+second
        # print(new)
            for i in new:
                print(i,end=" ")
        # Find two different numbers and swap in the new array
        else:
            first.sort()
            second.sort()
            # print(first,second)
            for i in range(n):
                # print(i,n-i-1)
                if first[i]!=second[n-i-1]:
                    # Swap them
                    first[i],second[n-i-1]=second[n-i-1],first[i]
                    break
            new=first+second
            # print(new)
            for i in new:
                print(i,end=" ")
