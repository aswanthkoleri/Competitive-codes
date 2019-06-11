if __name__=="__main__":
	t=int(input())
	for _ in range(t):
		n=int(input())
		ar=list(map(int,input().split()))
		# Now create a map
		m={}
		m[1]=0
		m[2]=0
		result=0
		for i in ar:
			if i%3==1:
				m[1]+=1
			elif i%3==2:
				m[2]+=1
			elif i%3==0:
				result+=1
		# Now find the minimum of m[1] and m[2]
		minValue=min(m[1],m[2])
		result+=minValue
		# now see whether the number div by 3 is in m[1]
		result+=((m[1]-minValue)//3)
		result+=((m[2]-minValue)//3)
		print(result)
