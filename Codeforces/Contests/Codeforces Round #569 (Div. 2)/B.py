def op(a):
	return -(a+1)
def main():
	# Input
	n=int(input())
	ar=list(map(int,input().split()))
	# Algo
	positiveCount=0
	negativeCOunt=0
	for i in range(n):
		if ar[i]>=0:
			positiveCount+=1
			ar[i]=op(ar[i])
		else:
			negativeCOunt+=1
	flag=0
	if n%2!=0:
		minimalIndex=0
		minimal=abs(ar[minimalIndex])
		for i in range(n):
			if abs(ar[i])>minimal:
				minimalIndex=i
				minimal=abs(ar[minimalIndex])
		ar[minimalIndex]=op(ar[minimalIndex])
		# The product is negative
		# Apply to the minimum
	# Output
	for i in range(n):
		print(ar[i],end=" ")
		# Answer is just the 

main()