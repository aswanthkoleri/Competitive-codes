def main():
	# *****************Input********************
	q=int(input()) 
	for _ in range(q):
		[n,k]=list(map(int,input().split()))
		ar=list(map(int,input().split()))

	# *****************Algo*********************
		minOfAr=min(ar)
		maxOfAr=max(ar)
		# UpperLimit of Min and Upper limit of Max
		UpMin=minOfAr+k
		UpMax=maxOfAr+k
		answer=min(UpMin,UpMax)
	# *****************Output*******************
		if abs(answer-minOfAr)<=k and abs(answer-maxOfAr)<=k:
			print(answer)
		else:
			print(-1)
	
main()