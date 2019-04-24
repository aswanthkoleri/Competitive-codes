SUM=0

def dice(m,n,x):
    if n==0 and x==0:
        return 1
    elif n<0 or x<0:
        return 0
    else:
        summation=0
        for i in range(1,m+1):
            summation+=dice(m,n-1,x-i)
        return summation
def main():
    [m,n,x] = list(map(int,input().split()))
    print(dice(m,n,x))
main()  