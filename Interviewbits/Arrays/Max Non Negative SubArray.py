class Solution:
    # @param A : list of integers
    # @return a list of integers
    def maxset(self, A):
        traversed=[]
        sumTillNow=0
        bestSum=0
        bestTraversed=[]
        for number in A:
            if number >=0:
                traversed.append(number)
                sumTillNow+=number
            else:
                traversed=[]
                sumTillNow=0
            if sumTillNow>bestSum :
                bestSum=sumTillNow
                bestTraversed=traversed
            elif sumTillNow==bestSum and len(bestTraversed) < len(traversed) :
                # bestSum=sumTillNow
                bestTraversed=traversed
        return bestTraversed

