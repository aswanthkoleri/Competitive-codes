def binarySearch(b,target):
    start=0
    end=len(b)-1
    ans=-1
    while start<=end:
        mid=(start+end)//2
        if b[mid]<=target:
            start=mid+1
        else:
            ans=mid
            end=mid-1
    return ans
def bornThisWay(n,m,ta,tb,k,a,b):
    noFlight=0
    if k>=n:
        print(-1)
    else:
        maximum=-1
        for x in range(k+1):
            # Cancel x flights in "a"
            i=0
            j=0
            i+=x
            # i is the index having the current flight time in "a"
            # Now cancel k-x flights in "b"
            # Before that I have to rule out flights on which he cannot go because it arrives late
            pos=binarySearch(b,a[i]+ta-1)
            # Now j is the index having the first flight to C after the earliest from A reaches B
            # Now cancel the k-x flights in "b"
            j+=(pos)+(k-x)
            # print("i,j",i,j)
            if j>=m or pos==-1:
                noFlight=1
                break
            elif b[j]+tb>maximum:
                maximum=b[j]+tb
            # print(maximum)
        if noFlight==1:
            print(-1)
        else:
            print(maximum)

if __name__=="__main__":
# Write the main function here
    [n,m,ta,tb,k]=list(map(int,input().split()))
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    bornThisWay(n,m,ta,tb,k,a,b)