def main():
    [n,k,m]=list(map(int,input().split(" ")))
    ar=list(map(int,input().split(" ")))
    ar.sort()
    length=len(ar)
    prevSum=sum(ar)
    prev=sum(ar)/length
    maxAvg=prev
    # print(maxAvg)
    while True:
        # find the max no that can be added to the list within the provided number of operations
        toadd = min(length*k,m)
        # find new average 
        # print(toadd)
        newAvg= ((prevSum+toadd)/length)
        # print(prevSum+toadd)
        # print(newAvg)
        # if new average is greater than the old average 
        if newAvg > maxAvg:
            maxAvg=newAvg
        # print(maxAvg)
        # delete the first element
        popped=ar.pop(0)
        m-=1
        length-=1
        if length==0 or m<0:
            break
        prevSum=prevSum-popped
        # prev=newAvg-(toadd-popped/len(ar))
        
    print(str.format('{0:.20f}',maxAvg))
    return
main()