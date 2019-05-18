# Ugly Numbers
# Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included.

# Given a number n, the task is to find n’th Ugly number.
UGLY=[0]*(10**4)
def ugly(n):
    global UGLY
    UGLY[0]=1
    i1,i2,i3=0,0,0
    next2=2
    next3=3
    next5=5
    for i in range(1,n):
        minVal=min(next2,next3,next5)
        UGLY[i]=minVal
        if minVal==next2:
            i1=i1+1
            next2=2*UGLY[i1]
        if minVal==next3:
            i2=i2+1
            next3=3*UGLY[i2]
        if minVal==next5:
            i3=i3+1
            next5=5*UGLY[i3]
    return
        
if __name__=="__main__":
# Write the main function here
    t=int(input())
    ugly(10**4)
    for _ in range(t):
        # accept the value n 
        n=int(input())
        print(UGLY[n-1])
