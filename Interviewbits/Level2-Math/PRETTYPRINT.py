# from pandas import *
def prettyPrint(A):
	D=A*2-1
	current=A
	mat=[[0 for i in range(D)] for i in range(D)]
	i,j=0,0
	start=0
	while current>0:
		# print(i,j,D)
		# Top
		while j<D:
			mat[i][j]=current
			j+=1
		j-=1
		# right
		while i<D:
			mat[i][j]=current
			i+=1
		i-=1
		while j>=start:
			mat[i][j]=current
			j-=1
		j+=1
		while i>=start:
			mat[i][j]=current
			i-=1
		i+=1
		current-=1
		i+=1
		j+=1
		D-=1
		start+=1
	return mat

if __name__=="__main__":
	A=int(input())
	matrix=prettyPrint(A)
	for i in range(len(matrix)):
		for j in range(len(matrix)):
			print(matrix[i][j],end=" ")
		print()


