from math import floor
def main():
    q=int(input())
    ans=[]
    for _ in range(q):
        [n,a,b]=list(map(int,input().split(" ")))
        # find rate per litre for b
        ratePerLitreforTwo=b/2
        # consider corner case of n<b
        if n<2:
            cost=n*a
        elif ratePerLitreforTwo<a:
            # then find the cost 
            cost=floor(n/2)*b + (n%2)*a
        else:
            cost=n*a
        
        ans.append(cost)
    for i in ans:
        print(i)
main()