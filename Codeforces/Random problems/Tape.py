def main():
    # accept nmk
    [n,m,k]=list(map(int,input().split(" ")))
    ar=list(map(int,input().split(" ")))
    diff=[]
    prev=ar[0]
    for i in range(1,len(ar)):
        diff.append(ar[i]-prev)
        prev=ar[i]
    # Sort in ascending order and take first k's sum
    diff.sort()
    # print(diff)
    # now have to find sum of n-k first elements of diff
    sumofdiff = sum(diff[:n-k])
    # therefore total sum is sum of diff + k
    result=sumofdiff+k
    print(result)
    return
main()