def maxRod(ar,length):
    if length==0:
        return 0
    q=0
    for i in range(length):
       q=max(q,ar[i]+maxRod(ar,length-(i+1)))
    return q  

def main():
    ar=list(map(int,input().split()))
    print(maxRod(ar,len(ar)))
main()