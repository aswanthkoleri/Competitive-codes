def main():
	t=int(input())
	for _ in range(t):
		string1=input()
		string2=input()
		#  i traverses string 1
		# j traverses string 2
		i=0
		j=0
		NO=0
		while i<len(string1):
			if string1[i]==string2[j]:
				prev=string1[i]
				j+=1
				i+=1
				curr=0
				if i<len(string1):
					curr=string1[i]
				else:
					break
			else:
				NO=1
				break
			while j < len(string2) and string2[j]==prev and curr!=0 and curr!=prev:
				j+=1
			if j>=len(string2):
				# print("Running")
				NO=1
				break
		# Now check if there is extra
		while j<len(string2):
			if string1[i-1]!=string2[j]:
				NO=1
				break
			j+=1
		if NO==1:
			print("NO")
		else:
			print("YES")
main()
