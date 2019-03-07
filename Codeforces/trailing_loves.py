def gcd(a,b):
    if a==0:
        return b
    else:
        return gcd(b%a,a)

def main():
    # enter n and b
    [n,b]=list(map(int,input().split(" ")))
    # factorial = fact(n)
    # print(factorial)
    # now find trailing zeros
    # repeatedly divide factorial until its not divisible by b
    # count=0
    # while factorial%b==0:
        # factorial=factorial/b
        # count+=1
    # print(count)
    # return
    mul=1
    for i in range(1,n+1):
        a=i
        c=b
        if a>c:
            a,c=c,a
        gcdVal=gcd(a,c)
        # print(gcdVal)
        if gcdVal!=1:
            mul*=i
    # now find trailing zeroes in mul 
    count=0
    while mul%b==0:
        mul=mul/b
        count+=1
    print(count)
        
main()