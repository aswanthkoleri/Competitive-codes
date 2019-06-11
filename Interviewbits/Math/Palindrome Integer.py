class Solution:
    # @param A : integer
    # @return an integer
    def isPalindrome(self, A):
        string=str(A)
        N=len(string)
        flag=0
        for i in range(int(N/2)):
            if string[i]!=string[N-i-1]:
                flag=1
                break
        if flag==0:
            return 1
        else:
            return 0