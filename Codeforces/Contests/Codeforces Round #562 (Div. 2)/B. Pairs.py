def checkCommon(tuple1,tuple2):
	temp=set()
	temp.add(tuple1[0])
	temp.add(tuple1[1])
	temp.add(tuple2[0])
	temp.add(tuple2[1])
	if len(temp)==4:
		return False
	else:
		return True

def main():
	[n,m]=list(map(int,input().split()))
	ar=list()
	for i in range(m):
		pair=tuple(map(int,input().split()))
		ar.append(pair)
	first=ar[0]
	flag=0
	for i in range(1,m):
		second=ar[i]
		if checkCommon(first,second)==False:
			flag=1
			x=[first[0],first[1]]
			y=[second[0],second[1]]
			break
	if flag==0:
		print("YES")
	else:
		# print(x,y)
		# Compute various values of x and y and check for them 
		# We can have 2 values possible for each x and y
		for i in x:
			for j in y:
				# print(i,j)
				# Now x and y and i and j
				# Now check whether either of them is in each tuple
				flag=0
				for k in range(m):
					# Check whether i or j in kth tuple
					if i not in ar[k] and j not in ar[k]:
						flag=1
				if flag==0:
					print("YES")
					return
		print("NO")  
	# print(ar)

main()