t=[0]*10000
t[0]=t[1]=2
def foo(n):
    if t[n]!=0:
        return t[n]
    else:
        sum=0
        for i in range(1,n):
            sum+=(2*t[i]*t[i-1])
            t[i+1]=sum
        return sum
def main():
    # enter n
    n=int(input())
    print(foo(n))
main()


    
    