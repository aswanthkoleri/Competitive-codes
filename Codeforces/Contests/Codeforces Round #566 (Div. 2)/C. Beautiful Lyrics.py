if __name__=="__main__":
	n=int(input())
	hashMap={}
	# Construction of hashMap
	for _ in range(n):
		word=input()
		noOfVowels=0
		last=0
		for i in word:
			if i=="a" or i=="e" or i=="i" or i=="o" or i=="u":
				last=i
				noOfVowels+=1
		if noOfVowels not in hashMap:
			hashMap[noOfVowels]={}
			hashMap[noOfVowels][last]=[]
		elif last not in hashMap[noOfVowels]:
			hashMap[noOfVowels][last]=[]
		hashMap[noOfVowels][last].append(word)
	# Constuct complete duos : same NoOfVowels + same LastVowel
	CompleteDuos=[]
	# Constuct Semi-Complete duos : same No Of Vowels
	SemiCompleteDuos=[]
	for SameNoOfVowels in hashMap:
		# Complete Duos
		remaining=[] # contains the remaining words having the same No of vowels
		for sameLastVowel in hashMap[SameNoOfVowels]:
			while len(hashMap[SameNoOfVowels][sameLastVowel])>=2:
				CompleteDuos.append((hashMap[SameNoOfVowels][sameLastVowel].pop(),hashMap[SameNoOfVowels][sameLastVowel].pop()))
			while len(hashMap[SameNoOfVowels][sameLastVowel])>0:
				remaining.append(hashMap[SameNoOfVowels][sameLastVowel].pop())
		# Semi Complete Duos
		while len(remaining)>=2:
			SemiCompleteDuos.append((remaining.pop(),remaining.pop()))
	# print(CompleteDuos)
	# print(SemiCompleteDuos)
	NoOfLyrics=0
	minValue=min(len(CompleteDuos),len(SemiCompleteDuos))
	NoOfLyrics=minValue
	extra=((len(CompleteDuos)-minValue))
	NoOfLyrics+=extra//2
	print(NoOfLyrics)
	# Now printing the output
	for i in range(minValue):
		print(SemiCompleteDuos[i][0],CompleteDuos[i][0])
		print(SemiCompleteDuos[i][1],CompleteDuos[i][1])
	for j in range(minValue,minValue+extra-1,2):
		print(CompleteDuos[j][0],CompleteDuos[j+1][0])
		print(CompleteDuos[j][1],CompleteDuos[j+1][1])
