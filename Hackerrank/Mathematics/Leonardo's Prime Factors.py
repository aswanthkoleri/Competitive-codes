def sieve(n):
    a=[True for i in range(n+1)]
    a[0]=False
    a[1]=False
    # for i in range(1,10):
        # print(i)
    for i in range(2,n+1):
        if a[i]==True:
            j=2*i
            while j<=n:
                a[j]=False
                j+=i
    prime=[]
    for i in range(n+1):
        if a[i] is True:
            # print(i)
            prime.append(i)
    return prime
# sieve(1000)

def main():
    prime=sieve(1000)
    # print(prime)
    # queries 
    q=int(input())
    for i in range(q):
        # range
        r=int(input())
        mul=1
        j=0

        while mul*prime[j]<=r:
            # print(mul)
            mul*=prime[j]
            j+=1
        print(j)



main()