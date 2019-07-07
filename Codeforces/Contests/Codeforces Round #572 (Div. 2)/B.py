def main():
	# *****************Input********************
	n=int(input())
	A=list(map(int,input().split())) 

	# *****************Algo*********************
	# Find the the greatest three digits 
	A.sort()
	[a,b,c]=A[len(A)-3:len(A)]
	# print(a,b,c)
	if a>=b+c:
		print("NO")
		return
	elif b>=a+c:
		print("NO")
		return
	elif c>=a+b:
		print("NO")
		return
	# *****************Output*******************
	print("YES")
	A=sorted(A,reverse=True)
	# Put the second element alast
	second=A.pop(1)
	A.append(second)
	print(" ".join(map(str,A)))
	return
	
main()