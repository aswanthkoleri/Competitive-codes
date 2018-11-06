def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

def main():
    t=int(input())
    for i in range(t):
        inputval=input().split()
        a=int(inputval[0])
        b=int(inputval[1])
        c=int(inputval[2])
        if c>a and c>b :
            print("NO")
        elif c%gcd(a,b)==0:
            print("YES")
        else:
            print("NO")
        

main()