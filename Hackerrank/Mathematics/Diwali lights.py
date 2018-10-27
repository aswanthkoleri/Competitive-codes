def main():
    t=int(input())
    for i in range(t):
        n=int(input())
        print(((2**n)-1)%10**5)
        
main()