import re
def main():
	# *****************Input********************
	A=input()

	# *****************Algo*********************
	def solve(A):
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
		# flag=0
		count=0
		while len(A)>0:
			if isPalindrome(A)==1:
				# flag=1
				break
			else:
				count+=1
				# flag=0
			A=A[:-1]
		return count
	ans=solve(A)
	# *****************Output*******************
	print(ans)
	
main()

# ****************************************** Solution 2 *********************************************
# Recursive Solution
# A Naive recursive program to find minimum  
# number insertions needed to make a string 
# palindrome 
import sys 
  
# Recursive function to find minimum  
# number of insertions 
def findMinInsertions(str, l, h): 
  
    # Base Cases 
    if (l > h): 
        return sys.maxsize 
    if (l == h): 
        return 0
    if (l == h - 1): 
        return 0 if(str[l] == str[h]) else 1
  
    # Check if the first and last characters are 
    # same. On the basis of the comparison result,  
    # decide which subrpoblem(s) to call 
      
    if(str[l] == str[h]): 
        return findMinInsertions(str, l + 1, h - 1) 
    else: 
        return (min(findMinInsertions(str, l, h - 1), 
                    findMinInsertions(str, l + 1, h)) + 1) 
  
# Driver Code 
if __name__ == "__main__": 
      
    str = "geeks"
    print(findMinInsertions(str, 0, len(str) - 1)) 


    # ******************************************** Solution 3 ********************************************


# A Dynamic Programming based program to 
# find minimum number insertions needed 
# to make a str1ing palindrome 

# A utility function to find minimum 
# of two integers 
def Min(a, b): 
	return min(a, b) 

# A DP function to find minimum number 
# of insertions 
def findMinInsertionsDP(str1, n): 

	# Create a table of size n*n. table[i][j] 
	# will store minimum number of insertions 
	# needed to convert str1[i..j] to a palindrome. 
	table = [[0 for i in range(n)] 
				for i in range(n)] 
	l, h, gap = 0, 0, 0

	# Fill the table 
	for gap in range(1, n): 
		l = 0
		for h in range(gap, n): 
			if str1[l] == str1[h]: 
				table[l][h] = table[l + 1][h - 1] 
			else: 
				table[l][h] = (Min(table[l][h - 1], 
								table[l + 1][h]) + 1) 
			l += 1

	# Return minimum number of insertions 
	# for str1[0..n-1] 
	return table[0][n - 1]; 

# Driver Code 
str1 = "geeks"
print(findMinInsertionsDP(str1, len(str1))) 

# This code is contributed by 
# Mohit kumar 29 
