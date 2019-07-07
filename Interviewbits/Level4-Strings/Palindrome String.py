import re
def isPalindrome(string):
	# Refine the string to alphanumeric characters
	refined="".join(re.findall(r'\w+',string.lower()))
	# Now palindrome algo
	l=0
	h=len(refined)-1
	rev=refined[::-1]
	if refined==rev:
		return 1
	else:
		return 0
def main():
	# *****************Input********************
	string=input() 

	# *****************Algo*********************
	ans=isPalindrome(string)

	# *****************Output*******************
	print(ans)
	
main()