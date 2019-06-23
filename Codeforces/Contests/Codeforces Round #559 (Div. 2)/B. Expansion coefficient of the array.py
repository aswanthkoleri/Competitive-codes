if __name__=="__main__":
	n=int(input())
	ar=list(map(int,input().split()))
	m=ar[0]//(n-1)
	for i in range(1,n):
		m=min(m,ar[i]//(max(n-i-1,i)))
	print(m)
	