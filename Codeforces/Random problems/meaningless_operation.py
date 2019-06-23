def gcd(a,b):
    if a==0:
        return b
    else:
        return gcd(b%a,a)

def main():
    # [a,b]=list(map(int,input().split(" ")))
    # print(gcd(a,b))
    q=int(input())
    for _ in range(q):
        # accept the a
        a=int(input())
        # Now find b with maximum gcd
        maximum=gcd(1^a,1&a)
        for b in range(2,a):
            maximum=max(gcd(a^b,a&b),maximum)
        print(maximum)

main()