def checkDivisible(n):
	temp=list(map(int,str(n)))
	sumOfDigits=sum(temp)
	if sumOfDigits%4==0:
		return True

def main():
	# *****************Input********************
	n=int(input())
	# print(n)
	# *****************Algo*********************
	while True:
		if checkDivisible(n)==True:
			print(n)
			return
		n+=1
	# *****************Output*******************

	
main()