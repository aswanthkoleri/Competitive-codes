def main():
	# Accept the x y z
	[x,y,z]=list(map(int,input().split()))
	plus=0
	minus=0
	zero=0
	uncertain=0
	# Plus check
	if x+z>y and x>y+z:
		plus=1
	elif x+z<y and x<y+z:
		minus=1
	elif x+z==y and x==y+z:
		zero=1
	else:
		uncertain=1
	if zero==1:
		print('0')
	elif minus==1:
		print('-')
	elif plus==1:
		print('+')
	elif uncertain==1:
		print('?')
main()