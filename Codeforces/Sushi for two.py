def main():
    # n 
    # ar
    n=int(input())
    ar=list(map(int,input().split(" ")))
    maxlen=0
    two=0
    one=0
    i=0
    twolen=0
    while i<n:
        
        while i<n and ar[i]==2:
            # print(ar[i])
            two+=1
            i+=1
        twolen=two
        while i<n and ar[i]==1 and two>0:
            # print(ar[i])
            two-=1
            i+=1
        len=twolen-two
        # print("len",len)
        if len>maxlen:
            maxlen=len
        two=0
        if i<n and ar[i]==1:
            i+=1
    i=0
    while i<n:
        
        while i<n and ar[i]==1:
            # print(ar[i])
            one+=1
            i+=1
        twolen=one
        # print("Two len = ", twolen)
        while i<n and ar[i]==2 and one>0:
            # print(ar[i])
            one-=1
            i+=1
        # print("one = ",one)
        len=twolen-one
        # print(len)
        # print("len",len)
        if len>maxlen:
            maxlen=len
        one=0
        if i<n and ar[i]==2:
            i+=1
            # print("skip")

    print(maxlen*2)
main()
    
