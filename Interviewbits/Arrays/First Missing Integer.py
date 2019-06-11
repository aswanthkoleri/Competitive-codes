def firstMissingPositive(A):
    m={}
    for i in A:
        if i not in m:
            m[i]=1
    i=1
    while True:
        if i not in m:
            return i
        i+=1
if __name__=="__main__":
# Write the main function here
    A=list(map(int,input().split()))
    print(firstMissingPositive(A))
