def main():
	[a,b,c,d]=list(map(int,input().split()))
	ar=[a,b,c]
	[first,second,third]=sorted(ar)
	result=0
	if abs(first-second)<d:
		result+=abs(abs(first-second)-d)
	if abs(second-third)<d:
		result+=abs(abs(second-third) - d)
	print(result)
main()
