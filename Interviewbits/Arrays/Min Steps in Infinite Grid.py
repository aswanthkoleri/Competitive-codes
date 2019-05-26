class Solution:
	# @param A : list of integers
	# @param B : list of integers
	# @return an integer
	def coverPoints(self, A, B):
        N=len(A)
        minSteps=0
        previous=(A[0],B[0])
        for i in range(1,N):
            current=(A[i],B[i])
            minSteps+=(max(abs(current[0]-previous[0]),abs(current[1]-previous[1])))
            previous=current
            # minSteps+=max(A[i],B[i])
        return minSteps