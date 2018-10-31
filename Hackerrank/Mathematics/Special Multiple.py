def main():
    t=int(input())
    while t:
        n=int(input())
        num=9
        if num%n==0:
            print(num)
        else:
            num*=10
            while 1:
                print(num)
                if num%n==0:
                    print(num)
                    break
                elif (num+9)%n==0:
                    print(num+9)
                    break
                num*=10
        t-=1
main()
