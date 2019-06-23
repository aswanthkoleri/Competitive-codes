if __name__=="__main__":
	n=int(input())
	ar=list(map(int,input().split()))
	[count1,count2,count3,count4,count5,count6]=[0,0,0,0,0,0]
	for num in ar:
		if num==4:
			count1+=1
		elif num==8 and count1>0:
			count1-=1
			count2+=1
		elif num==15 and count2>0:
			count2-=1
			count3+=1
		elif num==16 and count3>0:
			count3-=1
			count4+=1
		elif num==23 and count4>0:
			count4-=1
			count5+=1
		elif num==42 and count5>0:
			count5-=1
			count6+=1
	# print(count6)
	print(len(ar)-count6*6) 