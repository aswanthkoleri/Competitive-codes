def main():
	# *****************Input********************
	A=list(map(int,input().split()))
	B=list(map(int,input().split()))

	# *****************Algo*********************
	def merge(A,B):
		# Use pointers i and j initially 0.
		# if A[i]>=B[j] add 1 to i add a[i] to new array
		# else add b[i] to new array and add 1 to j
		i,j=0,0
		new=[]
		while i < len(A) and j < len(B):
			if A[i]<=B[j]:
				new.append(A[i])
				i+=1
			else:
				new.append(B[j])
				j+=1
		while i<len(A):
			new.append(A[i])
			i+=1
		while j<len(B):
			new.append(B[j])
			j+=1
		return new

	ans=merge(A,B)
	# *****************Output*******************
	print(ans)
	
main()