if __name__=="__main__":
	n=int(input())
	m=n//2+1
	print(m)
	j,k=1,1
	alt=0
	for i in range(1,n+1):
		print(j,k)
		if alt==0:
			k+=1
			alt=1
		else:
			j+=1
			alt=0

