def maxProd(n):
    val=[0 for i in range(n+1)]
    
    for i in range(2,n+1):
        for j in range(1,n):
            val[i]=max(val[i],j*(i-j),val[i-j]*j)
    return val[n]

def main():
    n=int(input())
    print(maxProd(n))
main()