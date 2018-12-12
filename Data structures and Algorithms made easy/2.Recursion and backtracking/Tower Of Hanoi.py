def toh(n,fromPeg,toPeg,auxPeg):
    if n==1:
        print("Move disk"+str(n)+ " from "+fromPeg+"to "+toPeg)
        return 
    else:
        toh(n-1,fromPeg,auxPeg,toPeg)
        print("Move disk" +str(n)+ " from "+fromPeg+"to "+toPeg)
        toh(n-1,auxPeg,toPeg,fromPeg)

def main():
    noOfdisks=int(input())
    toh(noOfdisks,'a','c','b')

main()