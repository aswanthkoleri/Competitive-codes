if __name__=="__main__":
	n=int(input())
	tuples=[]
	used={}
	for _ in range(n):
		word=input()
		noOfVowels=0
		last=0
		for i in word:
			if i=="a" or i=="e" or i=="i" or i=="o" or i=="u":
				last=i
				noOfVowels+=1
		tuples.append((word,noOfVowels,last))
	# print(tuples)
	noOfLyrics=0
	answerTuples=[]
	ans=tuples
	# ans=sorted(tuples,key=lambda x: x[1],reverse=True)
	# Split to Arrays containing words with same no of vowels and words containing both same vowel and same last vowel
	sameVowel=[]
	sameVowelAndLast=[]
	used={}
	for i in range(len(ans)):
		used[i]=False
	print(ans)
	for i in range(len(ans)-1):
		if not used[i] and not used[i+1] and ans[i][1]==ans[i+1][1] and ans[i][2]==ans[i+1][2]:
			sameVowelAndLast.append((ans[i],ans[i+1]))
			used[i]=True
			used[i+1]=True
	for i in range(len(ans)):
		used[i]=False
	for i in range(len(ans)-1):
		print(ans[i][0],ans[i+1][0],ans[i][1],ans[i+1][1],used[i],used[i+1])
		if not used[i] and not used[i+1] and ans[i][1]==ans[i+1][1] and ans[i][2]!= ans[i+1][2]:
			print(ans[i][0],ans[i+1][0])
			sameVowel.append((ans[i],ans[i+1]))
			used[i]=True
			used[i+1]=True

	# Now to find the no of lyrics
	print(sameVowelAndLast)
	print(sameVowel)
	noOfLyrics=min(len(sameVowel),len(sameVowelAndLast))
	extra=len(sameVowelAndLast)-noOfLyrics
	noOfLyrics+=(extra//4)
	print(noOfLyrics)