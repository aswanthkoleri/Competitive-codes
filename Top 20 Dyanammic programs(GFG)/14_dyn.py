def maxRod(ar,length):
    val=[0 for i in range(length+1)]
    val[0]=0
    for i in range(1,length+1):
        for j in range(i):
            val[i]=max(val[i],ar[j]+val[i-(j+1)])
    return val[i]  

def main():
    ar=list(map(int,input().split()))
    print(maxRod(ar,len(ar)))
main()