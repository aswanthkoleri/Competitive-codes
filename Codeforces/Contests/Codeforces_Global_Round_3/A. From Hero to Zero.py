# def minSteps(n,k,memo):
    
#     if n in memo:
#         return memo[n]
#     if n==0:
#         return 0
#     if n%k==0:
#         res=minSteps(n/k,k,memo)
#     else:
#         res=minSteps(n-1,k,memo)
#     memo[n]=1+res
#     return memo[n]
#         # return 1 + minSteps(n-1,k)
    
# if __name__=="__main__":
# # Write the main function here
#     # No of tests
#     # global memo
#     t=int(input())
#     for _ in range(t):
        
#         [n,k]=list(map(int,input().split()))
#         memo=[-1 for i in range(n+1)]
#         memo={}
#         print(minSteps(n,k,memo))
        
if __name__=="__main__":
# Write the main function here
    # No of tests
    t=int(input())
    for _ in range(t):
        [n,k]=list(map(int,input().split()))
        count=0
        while n!=0:
            # print(n)
            mod=n%k
            if mod==0:
                n=n//k
                count+=1
            else:
                count+=mod
                n-=mod
        print(count)
        