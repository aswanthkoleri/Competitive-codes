import math
m=[]
def Seive(n):
    global m
    m=[True for i in range(n+1)]
    m[0]=False
    m[1]=False
    i=2
    while i*i < n+1:
        # if that no is Prime
        if m[i]==True:
            j=2
            while i*j < n+1:
                m[i*j]=False
                j+=1
        i+=1
class Solution:
    # @param A : integer
    # @return a list of integers
    def primesum(self,A):
        # m={}
        noList=[]
        Seive(A)
        # print(m)
        for i in range(2,int(A/2)+1):
            # print(i,A-i)
            if m[i]==True and m[A-i]==True:
                noList=[i,A-i]
                break
        return noList

# if __name__=="__main__":
# # Write the main function here
#     # accept the number
#     A=int(input())
#     print(primesum(A))