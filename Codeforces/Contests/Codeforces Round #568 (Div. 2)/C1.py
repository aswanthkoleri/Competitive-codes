import heapq
# from sortedcontainers import SortedList

def main():
	[n,limit]=list(map(int,input().split()))
	ar=list(map(int,input().split()))
	# Use a stack
	sumTillNow=0
	i=0
	setOfAr=list()
	m={}
	while i<n:
		count=0
		if sumTillNow+ar[i]>limit:
			temp=sumTillNow+ar[i]
			stack=list(setOfAr)
			# print(stack)
			while temp>limit:
				popped=stack.pop()
				# print(popped)
				# m[popped]-=1
				# if m[popped]>0:
				# 	stack=[popped]+stack
				temp=temp-popped
				# print(temp)
				count+=1
		if i==n-1:
			print(count)
		else:
			print(count,end=" ")
		# print(setOfAr)
		setOfAr.append(ar[i])
		setOfAr=sorted(setOfAr)
		# print(setOfAr)
		# if ar[i] in m:
		# 	m[ar[i]]+=1
		# else:
		# 	m[ar[i]]=1
		sumTillNow+=ar[i]
		i+=1
main()