def Combination(n,r):# n!/r!(n-r)!
	numerator=1
	denominator=1
	r=min(r,n-r)
	# print(r)
	for i in range(r):
		numerator*=n
		denominator*=(i+1)
		n-=1
	answer=numerator//denominator
	return answer
def uniquePath(A,B):
	return Combination(A+B-2,B-1)
if __name__=="__main__":
	[A,B]=list(map(int,input().split()))
	print(uniquePath(A,B))
