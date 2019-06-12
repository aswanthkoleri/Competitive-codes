if __name__=="__main__":
	[m,n]=list(map(int,input().split()))
	# Accept the matrix
	mat=[]
	for i in range(m):
		temp=list(input())
		mat.append(temp)
	visited={}
	# Now detect the symbols
	ans="NO"
	# print(mat)
	# for i in mat:
	# 	for j in i:
	# 		print(j,end=" ")
	# 	print()

	for i in range(1,m-1):
		flag=0
		for j in range(1,n-1):
			# print(i,j)
			# print(mat[i][j],mat[i-1][j],mat[i+1][j],mat[i][j-1],mat[i][j+1])
			if  mat[i][j]=="*" and mat[i+1][j]=="*" and mat[i][j+1]=="*" and mat[i-1][j]=="*" and mat[i][j-1]=="*":
				# Mark all those stars as dot
				# First all the vertical dots
				mat[i][j]="."
				vertical=i+1
				# print("Running till here")
				while vertical<m and mat[vertical][j]=="*":
					mat[vertical][j]="."
					vertical+=1
				verticalR=i-1
				while verticalR >=0 and mat[verticalR][j]=="*":
					mat[verticalR][j]="."
					verticalR-=1
				horizontal=j+1
				while horizontal<n and mat[i][horizontal]=="*":
					mat[i][horizontal]="."
					horizontal+=1
				horizontalR=j-1
				while horizontalR>=0 and mat[i][horizontalR]=="*":
					mat[i][horizontalR]="."
					horizontalR-=1
				ans="YES"
				flag=1
				break
		if flag==1:
				break
	# for i in mat:
	# 	for j in i:
	# 		print(j,end=" ")
	# 	print()
	for i in range(m):
		flag=0
		for j in range(n):
			if mat[i][j]=="*":
				ans="NO"
				flag=1
				break
		if flag==1:
			break
	print(ans)