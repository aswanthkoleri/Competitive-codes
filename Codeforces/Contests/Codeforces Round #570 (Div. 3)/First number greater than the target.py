def main():
	# *****************Input********************
	# First accept the sorted array
	ar=list(map(int,input().split()))
	# target
	target=int(input()) 

	# *****************Algo*********************
	start=0
	end=len(ar)
	ans=-1
	while start<=end:
		mid=(start+end)//2
		if ar[mid]<=target:
			start=mid+1
		else:
			ans=mid
			end=mid-1

	# *****************Output*******************
	print(ar[ans])
	
main()