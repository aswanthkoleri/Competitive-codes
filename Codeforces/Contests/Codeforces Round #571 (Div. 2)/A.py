def main():
	# *****************Input********************
	[n,m,k]=list(map(int,input().split())) 
	# *****************Algo*********************
	minVal=min(m,k)
	if minVal>=n:
		print("Yes")
		return
	else:
		print("No")
		return

	# *****************Output*******************

	
main()