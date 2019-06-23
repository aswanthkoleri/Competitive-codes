# B. Nick and Array
# time limit per test1 second
# memory limit per test256 megabytes
# inputstandard input
# outputstandard output
# Nick had received an awesome array of integers a=[a1,a2,…,an] as a gift for his 5 birthday from his mother. He was already going to explore its various properties but after unpacking he was disappointed a lot because the product a1⋅a2⋅…an of its elements seemed to him not large enough.

# He was ready to throw out the array, but his mother reassured him. She told him, that array would not be spoiled after the following operation: choose any index i (1≤i≤n) and do ai:=−ai−1.

# For example, he can change array [3,−1,−4,1] to an array [−4,−1,3,1] after applying this operation to elements with indices i=1 and i=3.

# Kolya had immediately understood that sometimes it's possible to increase the product of integers of the array a lot. Now he has decided that he wants to get an array with the maximal possible product of integers using only this operation with its elements (possibly zero, one or more times, as many as he wants), it is not forbidden to do this operation several times for the same index.

# Help Kolya and print the array with the maximal possible product of elements a1⋅a2⋅…an which can be received using only this operation in some order.

# If there are multiple answers, print any of them.

# Input
# The first line contains integer n (1≤n≤105) — number of integers in the array.

# The second line contains n integers a1,a2,…,an (−106≤ai≤106) — elements of the array

# Output
# Print n numbers — elements of the array with the maximal possible product of elements which can be received using only this operation in some order from the given array.

# If there are multiple answers, print any of them.
def doOperation(a):
	return -a-1
def main():
	n=int(input())
	ar=list(map(int,input().split()))
	# Count negative and positive
	posCount=0
	negCount=0
	for i in ar:
		if i>=0:
			posCount+=1
		else:
			negCount+=1
	evenPos=0
	if posCount%2==0:
		evenPos=1
	evenNeg=0
	if negCount%2==0:
		evenNeg=1

	# Obtain minimum positive val location
	minVal=((10**6 )+ 10) 
	minIndex=-1
	for i in range(n):
		if ar[i]>=0 and ar[i]<minVal:
			minVal=ar[i]
			minIndex=i
	# Here we have to consider the case of zeroes too
	allZeroes=0
	if min(ar)==0 and max(ar)==0:
		allZeroes=1
	if allZeroes==1 and n%2==0:
		for i in range(n):
			print(-1,end=" ")
		return
	elif allZeroes==1 and n%2!=0:
		for i in range(n):
			print(0,end=" ")
		return
			# if ar[i]%2==0:

	# If all negative and if all positive case
	allNegative=0
	allPositive=0
	# If negative
	if max(ar)<0:
		allNegative=1
	if min(ar)>0:
		allPositive=1

	if allNegative==1:
		if n%2==0:
			# Even negative
			for i in ar:
				print(i,end=" ")
			return
		else:
			# Odd negative
			maxNeg=abs(ar[0])
			maxNegIndex=0
			for i in range(n):
				if abs(ar[i])>maxNeg:
					maxNeg=abs(ar[i])
					maxNegIndex=i
			for i in range(n):
				if i==maxNegIndex:
					print(doOperation(ar[i]),end=" ")
				else:
					print(ar[i])
			return
	if allPositive==1:
		# Even positive
		if n%2==0:
			# Change everything
			for i in range(n):
				print(doOperation(ar[i]),end=" ")
			return
		else:
			# Odd positive
			for i in range(n):
				if i==minIndex:
					print(ar[i],end=" ")
				else:
					print(doOperation(ar[i]),end=" ")
			return

	if evenNeg!=1:
		# Odd Negative
		# 2 cases
		# 1. if even Even Positive
		# find the minimum from the array and make it unchanged and rest is changed by the operation
		maxNeg=abs(ar[0])
		maxNegIndex=0

		for i in range(n):
			if ar[i]<0 and abs(ar[i])>maxNeg:
				maxNeg=abs(ar[i])
				maxNegIndex=i
		for i in range(n):
			if ar[i]<0 and i==maxNegIndex:
				ar[i]=doOperation(ar[i])
			elif ar[i]<0:
				ar[i]=ar[0]

		if evenPos==1:
			# Odd negative and even positive 
			for i in range(n):
				if ar[i]>=0:
					ar[i]=doOperation(ar[i])
		else:
		# 2. If odd Positive
			for i in range(n):
				if ar[i]>=0 and i==minIndex:
					ar[i]=ar[i]
				elif ar[i]>=0:
					ar[i]=doOperation(ar[i])
	else:
		# Even negative
		# print("Even Negative")
		if evenPos==1:
			# Even positve
			for i in range(n):
				if ar[i]>=0:
					ar[i]=doOperation(ar[i])
		else:
			for i in range(n):
				if ar[i]>=0 and i==minIndex:
					ar[i]=ar[i]
				elif ar[i]>=0:
					ar[i]=doOperation(ar[i])
			# return

	for i in ar:
		print(i,end=" ")
main()