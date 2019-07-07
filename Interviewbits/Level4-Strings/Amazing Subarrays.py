

def main():
	# *****************Input********************
	str1=input() 
	
	# *****************Algo*********************
	def solve(A):
		m={
		"a" : True,
		"e" : True,
		"i" : True,
		"o" : True,
		"u" : True,
		"A" : True,
		"E" : True,
		"I" : True,
		"O" : True,
		"U" : True
		}
		n=len(A)
		count=0
		for i in range(n):
			if A[i] in m:
				count+=(n-i)
		return count

	ans=solve(str1)

	# *****************Output*******************
	print(ans)
	
main()