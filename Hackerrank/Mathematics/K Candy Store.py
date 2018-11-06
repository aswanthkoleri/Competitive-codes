def comb(n,i):
    count=0
    mul=i
    denominator=1
    for k in range(i):
        denominator*=mul
        mul-=1
    numerator=1
    mul=n
    for k in range(i):
        numerator*=mul
        mul-=1
    ans=(numerator//denominator)
    if len(str(ans))>9:

        newans=str(ans)
        print("run1")
        # print("orgi : "+newans)
        
        return int(newans[-9:])
    else:
        print("run2")
        return str(ans)

# Main
def main():
    t=int(input())
    while t:
        n=int(input())
        k=int(input())
        print(comb(k+n-1,n-1))
        t-=1
main()