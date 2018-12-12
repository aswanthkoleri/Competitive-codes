def Binary(n,a):
    if n==0:
        print(a)
    else:
        a[n-1]=0
        Binary(n-1,a)
        a[n-1]=1
        Binary(n-1,a)
    
def main():
    n=int(input())
    a=[2 for i in range(n)]
    Binary(n,a)
main()