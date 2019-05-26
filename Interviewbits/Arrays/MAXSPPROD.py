MOD = 10**9 + 7 
# class Solution:
    # @param A : list of integers
    # @return an integer
def maxSpecialProduct(A):
    N=len(A)
    leftMax=[0 for i in range(N)]
    rightMin=[0 for i in range(N)]
    # create leftMax array
    s=[]
    for i in range(N-1,-1,-1):
        while len(s)>0 and A[i]>A[s[-1]]:
             item=s.pop()
             leftMax[item]=i
        s.append(i)
    print(leftMax)
     
    # Create the rightMin array
    s=[]
    for i in range(N):
        while len(s)>0 and A[i]>A[s[-1]]:
            item=s.pop()
            rightMin[item]=i
        s.append(i)
    print(rightMin)
    maxProd=0
    for i in range(N):
        product=((leftMax[i]%MOD)*(rightMin[i]%MOD))%MOD
        if product>maxProd:
            maxProd=product
    return maxProd 

if __name__=="__main__":
# Write the main function here
    A=list(map(int,input().split()))
    print(maxSpecialProduct(A))
