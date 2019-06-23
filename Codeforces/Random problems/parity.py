def main():
    # enter the input
    [b,k]=list(map(int,input().split(" ")))
    ar=list(map(int,input().split(" ")))
    # if b is even
    if b%2==0:
        # then check last no is even or not 
        # if even 
        if ar[k-1]%2==0:
            # then e+e=e
            print("even")
            return
        elif ar[k-1]%2!=0:
            # e+o=o
            print("odd")
            return
    elif b%2!=0:
        # calculate sum upto ar[k-2]
        sumVal=sum(ar[:k-1])
        if sumVal%2==0:
            # if even then o*e=e
            if ar[k-1]%2==0:
                # e+e=e
                print("even")
                return
            elif ar[k-1]%2!=0:
                print("odd")
                return
                # e+o=o
        elif sumVal%2!=0:
            if ar[k-1]%2==0:
                print("odd")
                return
            elif ar[k-1]%2!=0:
                print("even")
                return
    return
main()