def maxProd(n):
    if n==1:
        return 1
    else:
        maxVal=1
        for i in range(1,n):
            maxVal=max(maxVal,maxProd(n-i)*i,(n-i)*i)
        return maxVal
def main():
    n=int(input())
    print(maxProd(n))
main()