def smallest(a,b):
	if len(a)<len(b):
		return a
	elif len(b)<len(a):
		return b
	else:
		i=0
		# smallest=a
		while i<len(a) and a[i]==b[i]:
			i+=1
		if i>=len(a):
			return a
		if a[i] < b[i]:
			return a
		elif a[i]>b[i]:
			return b


def addingFunc(number1,number2):
	n1=len(number1)
	n2=len(number2)
	greater=number2
	smaller=number1
	if n1>n2:
		greater=number1
		smaller=number2
	diff=abs(n1-n2)
	result=""
	c=0
	for i in range(len(smaller)-1,-1,-1):
		sumVal=str(int(greater[diff+i]) + int(smaller[i]) + c)
		# print(greater[diff+i],smaller[i],sumVal,c)
		c=0
		# print("length",len(sumVal))
		if len(sumVal)>1:
			# Then carrier must be updated
			c=int(sumVal[0])
			sumVal=sumVal[1]
		# print("After",c)
		result+=sumVal

	# print(result)
	# Now the final apppending of the characters in the beginning

	for i in range(diff-1,-1,-1):
		sumVal=str(int(greater[i])+c)
		# print(sumVal,greater[i],c)
		c=0
		if len(sumVal)>=2:
			c=int(sumVal[0])
			sumVal=sumVal[1]
		result+=sumVal
	if c>0:
		result+=str(c)
	return result[::-1]

def main():
	# Now lets come to the program
	l=int(input())
	string=input()
	if l%2==0:
		# divide the string in the middle and add
		part1=string[0:int(l//2)]
		part2=string[int(l//2):]
		# print(part1,part2)
		# Fix for the leading zeros in even case
		# Find create a partition whe
		l1=0
		# print(string[int(l//2+l1)])
		while int(l//2)+l1 < len(string) and string[int(l//2)+l1]=="0":
			l1+=1
		l2=0
		# print(string[int(l//2)-110000011])
		while int(l//2)-l2 <len(string) and string[int(l//2)-l2]=="0":
			# print("run")
			l2+=1
		# print("l1 and l2",l1,l2+1)
		small=min(l1+1,l2)
		if small==l1+1:
			small-=1
			part1=string[:int(l//2)+small]
			part2=string[int(l//2)+small:]
		else:
			# small-=1
			part1=string[int(l//2)-small:]
			part2=string[:int(l//2)-small]
		# print(part1,part2)
		print(addingFunc(part1,part2))
	else:
		# Now two cases come
		# Cutting at l/2 and l/2+1
		first=string[0:int(l/2)+1]
		second=string[int(l/2):]
		cut1=(l//2)+1
		cut2=(l//2)
		l1=0
		# print(string[int(l//2+l1)])
		while int(cut1)+l1< len(string) and string[int(cut1)+l1]=="0":
			l1+=1
		l2=0
		# print(string[int(cut1)-1])
		while int(cut1)-l2 >=0 and string[int(cut1)-l2]=="0":
			# print("run")
			l2+=1
		# print("l1 and l2",l1,l2)
		small=min(l1,l2)
		if small==l1:
			c1part1=string[:int(cut1)+small]
			c1part2=string[int(cut1)+small:]
		else:
			c1part1=string[int(cut1)-small:]
			c1part2=string[:int(cut1)-small]


		l1=0
		# print(string[int(l//2+l1)])
		while int(cut2)+l1 < len(string) and string[int(cut2)+l1]=="0":
			l1+=1
		l2=0
		# print(string[int(cut2)-1])
		while int(cut2)-l2 >=0 and string[int(cut2)-l2]=="0":
			# print("run")
			l2+=1
		# print("l1 and l2",l1,l2)

		small=min(l1,l2)
		if small==l1:
			c2part1=string[:int(cut2)+small]
			c2part2=string[int(cut2)+small:]
		else:
			c2part1=string[int(cut2)-small:]
			c2part2=string[:int(cut2)-small]
		# print(addingFunc(c1part1,c1part2))
		# print(addingFunc(c2part1,c2part2))
		print(smallest(addingFunc(c1part1,c1part2),addingFunc(c2part1,c2part2)))
# def main():
# 	a=input()
# 	b=input()
# 	print(addingFunc(a,b))
main()
# main()


