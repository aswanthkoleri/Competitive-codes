def main():
    n=int(input())
    ar=list(map(int,input().split(" ")))
    # find even sum and odd sum
    even=0
    odd=0  
    for i in range(len(ar)):
        if i%2==0:
            even+=ar[i]
        else:
            odd+=ar[i]
    # now check when even=odd 
    count=0
    evenSum=0
    oddSum=0
    for i in range(len(ar)):
        if i%2==0:
            # remove that element and add to even sum at last
            even-=ar[i]
            # even becomes odd and odd becomes even
            
        else:
            odd-=ar[i]
        even,odd=odd,even
        even+=evenSum
        odd+=oddSum
        if even==odd:
            count+=1
        if i%2==0:
            evenSum+=ar[i]
        else:
            oddSum+=ar[i]
    print(count)
main()

