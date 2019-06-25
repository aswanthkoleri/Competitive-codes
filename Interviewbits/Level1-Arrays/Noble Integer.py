def solve(A):
    # Sort the array 
    A=sorted(A)
    # print(A)
    new=set(A)
    # Reverse traverse
    new=sorted(new)
    # print(new)
    # Create a dictionary containiing the frequency of all the digits
    m={}
    for i in A:
        if i not in m:
            m[i]=1
        else:
            m[i]+=1
    # print(m)
    prev=0
    flag=0
    N=len(new)
    # print(new)
    # print(m)
    for i in range(N-1,-1,-1):
        if new[i]==prev:
            flag=1
            break
        prev+=m[new[i]]
        # print(prev)
    if flag==1:
        return 1
    else:
        return -1

if __name__=="__main__":
# Write the main function here
    A=list(map(int,input().split()))
    print(solve(A))
