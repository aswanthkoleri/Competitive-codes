def main():
    money=1
    [n,c]=list(map(int,input().split(" ")))
    kms=n-1
    total=0
    # left=kms
    total+=money*min(c,kms)
    kms-=min(c,kms)
    money+=1
    while kms!=0:
        total+=(money)
        kms-=1
        money+=1
        # const=min(kms,c)
        # print("money= ",money," const= ",const)
        # total+=(money*(const))
        # kms-=const
        # money+=
    print(total)
main()