import copy
def main():
	# *****************Input********************
	n=int(input())
	str1=input()
	m={
	"a":[],
	"b":[],
	"c":[],
	"d":[],
	"e":[],
	"f":[],
	"g":[],
	"h":[],
	"i":[],
	"j":[],
	"k":[],
	"l":[],
	"m":[],
	"n":[],
	"o":[],
	"p":[],
	"q":[],
	"r":[],
	"s":[],
	"t":[],
	"u":[],
	"v":[],
	"w":[],
	"x":[],
	"y":[],
	"z":[]
	} 
	alpha="abcdefghijklmnopqrstuvwxyz"
	# make a map with arrays
	for j in range(n):
		m[str1[j]].append(j)
	# print(m)
	q=int(input())
	for _ in range(q):
	# *****************Algo*********************
		# ans=0
		# print(m)
		str2=input()
		new={}
		for i in str2:
			new[i] = 1 if i not in new else new[i]+1
		currMax=-1
		for i in alpha:
			if i in new:
				currMax=max(currMax,m[i][new[i]-1])
	# *****************Output*******************
		print(currMax+1)
	
main()