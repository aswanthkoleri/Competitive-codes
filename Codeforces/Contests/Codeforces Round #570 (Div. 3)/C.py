def main():
	# *****************Input********************
	q=int(input()) 
	for _ in range(q):
		[k,n,a,b]=list(map(int,input().split()))
		# k-->Charge
		# n-->No of turns
		# a-->Playing
		# b-->Playing and charging

	# *****************Algo*********************
		turns=n
		charge=k
		low=0
		high=n
		ans=0
		while low<=high:
			mid=(low+high)//2
			final=(n-mid)*b+mid*a
			if final<charge:
				ans=mid
				low=mid+1
			else:
				high=mid-1
		
	# *****************Output*******************
		if k-n*b<=0:
			ans=-1
		print(ans)
	
main()