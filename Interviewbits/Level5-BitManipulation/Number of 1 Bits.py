def main():
	# *****************Input********************
	A=int(input())

	# *****************Algo*********************
	def solve(A):
		# First subtract and then do & till the number becomes Zero. Count the no of times we do this.
		count=0
		while A:
			A&=(A-1)
			count+=1
		return count


	ans=solve(A)
	# *****************Output*******************
	print(ans)
	
main()