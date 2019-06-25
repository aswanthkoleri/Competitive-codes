def findMedian(A):
    	r=len(A)
    	c=len(A[0])
    	desired=r*c//2
    	# Find minimum and maximum
    	minimum=A[0][0]
    	maximum=A[r-1][c-1]
    	for i in range(r):
    		if A[i][0]<minimum:
    			minimum=A[i][0]
    		if A[i][c-1]>maximum:
    			maximum=A[i][c-1]
    	m={}
    	for i in range(r):
    		for j in range(c):
    			if A[i][j] in m:
    				m[A[i][j]]+=1
    			else:
    				m[A[i][j]]=1
    	# print(m)
    	while minimum<maximum:
    		# print(m)
    		median=(minimum+maximum)//2
    		# print(median)
    		while median not in m:
    			median-=1
    		# print("Running")
    		# Count the no's less than the median
    		count=m[median]-1
    		j=median-1
    		while j>=minimum:
    			if j in m:
    				count+=m[j]
    			j-=1

    		# print(count)
    		if count == desired:
    			return median
    		elif count<desired:
    			# print("THis is running")
    			minimum=median+1
    			# print(minimum,"minimum" , maximum)
    		else:
    			maximum=median


def main():
	# *****************Input********************
	r=int(input())
	c=int(input())
	A=[]
	for i in range(r):
		temp=list(map(int,input().split()))
		A.append(temp)

	# *****************Algo*********************
	answer=findMedian(A)

	# *****************Output*******************
	print(answer)
	
main()