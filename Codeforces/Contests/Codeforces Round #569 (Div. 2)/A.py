def answer(n):
	if n==1:
		return 1
	else:
		return answer(n-1) + 4*(n-1)
if __name__=="__main__":
	n=int(input())
	print(answer(n))