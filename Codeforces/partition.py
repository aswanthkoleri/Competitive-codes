def main():
    # accept n,m,k
    [n,m,k]=list(map(int,input().split(" ")))
    ar=list(map(int,input().split(" ")))
    # print(ar.sort(reverse=True))
    orderedAr=ar[:]
    orderedAr.sort(reverse=True)
    items=m*k
    # print(ar)
    # print(orderedAr)
    new=orderedAr[:items]
    # make a map 
    f=dict()
    for i in new:
        if i not in f:
            f[i]=1
        else:
            f[i]+=1
    # print(f)
    # print(len(new))

    # m=dict()
    # for i in new:
        # m[]
    # Now find the partitions plus the max sum 
    # iterate thorugh the array
    j=0 
    maxSum=sum(new)
    noOfpartitions=0
    partitions=[]
    # flag=0
    # print(len(ar))
    for i in range(len(ar)):
        # print("Element being examined = ",ar[i]," ",i)
        # print("j=",j)
        if noOfpartitions==k-1:
            # print("RUN")
            # maxSum+=sum(new)
            # flag=1
            break
        elif ar[i] in f and j<m:
            if f[ar[i]]>0:
            # print(ar[i])
            # maxSum+=ar[i]
                f[ar[i]]-=1
            # some=new.pop(new.index(ar[i]))
            # removed the element
            # print(some)
                j+=1
        if j==m:
            # print("partition created")
            # print("i==",i)
            partitions.append(i+1)
            # i-=1
            # print(/"i=",i)
            noOfpartitions+=1
            j=0
        # print(new)
    print(maxSum)
    # print(partitions)
    # partitions.reverse()
    # print(partitions)
    # if flag==0:
        # partitions.append(len(ar)-1)
    # if len(partitions)!=k-1:
        # partitions.append(len(ar)-1)
    for i in partitions:
        print(i,end=" ")
main()        
        
        

