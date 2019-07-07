# ***************************Not so efficient solution**********************************
# def main():
# 	# *****************Input********************
# 	A=list(map(int,input().split()))

# 	# *****************Algo*********************
# 	def diffBits(a,b):
# 		# Take XOR and count the number of set bits
# 		xor=a^b
# 		# Now the set bits
# 		setBits=0
# 		while xor:
# 			xor&=(xor-1)
# 			setBits+=1
# 		return setBits

# 	def cntBits(A):
# 		# First loop through the array
# 		# FInd the no of different bits in each pair and sum them
# 		answer=0
# 		for i in range(len(A)-1):
# 			for j in range(i+1,len(A)):
# 				# print(A[i],A[j])
# 				answer+=2*diffBits(A[i],A[j])
# 		return answer
# 	ans=cntBits(A)
# 	# *****************Output*******************
# 	print(ans)
	
# main()

# *********************************** Efficient Solution *************************************************
def checkBitSet(bitNo,number):
	mask=1<<bitNo
	result=number&mask
	if result!=0:
		return True
	else:
		return False

def main():
	# *****************Input********************
	A=list(map(int,input().split()))
	MOD=10**9 + 7
	# *****************Algo*********************

	def cntBits(A):
		# Steps
		# 1. Intially iterate from 31 to 0
		# 2. Check How many numbers in the list has that bit set
		# 3. Calculate pairs having that bit different. Therefore, update the answer as count*(n-count)*2
		answer=0
		n=len(A)
		for i in range(31,-1,-1):
			count=0
			for j in A:
				if checkBitSet(i,j):
					count+=1
			answer+=count*(n-count)*2
		return answer%MOD
	ans=cntBits(A)

	# *****************Output*******************
	print(ans)

main()