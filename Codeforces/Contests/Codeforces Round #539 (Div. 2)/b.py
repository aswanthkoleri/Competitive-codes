from math import floor
# prime=[]
def SieveOfEratosthenes(n):   
    # global prime
    p = 2
    prime=[True for i in range(n+1)]
    while (p * p <= n): 
        if (prime[p] == True):  
            for i in range(p * 2, n+1, p): 
                prime[i] = False
        p += 1
    return prime

def main():
    n=int(input())
    ar=list(map(int,input().split(" ")))
    # prime=SieveOfEratosthenes(n)
    # for i in range(2,n+1):
        # if prime[i]:
            # print(i,end=" ")
    # return
    # first find the maximum non prime number
    prime=SieveOfEratosthenes(max(ar))
    # prime[1]=False
    flag=0
    maxi=120
    for i in ar:
        print(i, prime[i])
        if not prime[i]:
            if i>-1:
                maxi=i
                print(maxi)
                flag=1
    # if there is no maximum non prime number 
    if flag==0:
        print(sum(ar))
    else:
        j=floor(maxi/2) - 1
        print("j",j)
        jack=1
        while j>=1:
            if maxi%j==0:
                jack=j
            j-=1
        # now find the minimum sum 
        # remove the maximum and the minimum element
        # and push the new elements
        minimum=min(ar)
        ar.pop(ar.index(minimum))
        ar.pop(ar.index(maxi))
        ar.append(maxi/jack)
        ar.append(minimum*jack)
        print(sum(ar))
main()