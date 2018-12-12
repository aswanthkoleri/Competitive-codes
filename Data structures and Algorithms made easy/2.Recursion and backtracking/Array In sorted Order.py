def ArrayInSortedOrder(a,n):
    if n==1:
        return "True"
    else:
        if a[n-2]>a[n-1]:
            return "False"
        else:
            return ArrayInSortedOrder(a,n-1)
            
def main():
    n=int(input())
    array=input().split(" ")
    a=[int(num) for num in array]
    print(a)
    # print(n)
    # print(a[n-1])
    print(ArrayInSortedOrder(a,n))
main()