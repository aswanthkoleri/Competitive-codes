def main():
	# *****************Input********************
	A=int(input())

	# *****************Algo*********************
	def solve(A):
		bitSize=32
		res=bin(A)
		# Reverse that
		res=res[-1:1:-1]
		res+=(bitSize-len(res))*'0'
		return int(res,2)
	ans=solve(A)
	# *****************Output*******************
	print(ans)
	
main()