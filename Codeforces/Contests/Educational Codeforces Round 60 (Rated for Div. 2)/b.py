from math import floor
def main():
    [n,m,k]=list(map(int,input().split(" ")))
    ar=list(map(int,input().split(" ")))
    c=floor(m/(k+1))
    r=m%(k+1)
    # find the first and second greatest number in the array 
    a=max(ar)
    # find second greates
    # remove first greatest
    ar.pop(ar.index(a))
    b=max(ar)
    # now find the value of max happiness 
    maxHappiness=c*((a*k) + b) + r*a
    print(maxHappiness)
main()