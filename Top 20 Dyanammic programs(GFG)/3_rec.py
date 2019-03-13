def editDistance(str1,str2,m,n):
    if m==0:
        return n
    if n==0:
        return m
    if str1[m]==str2[n]:
        return editDistance(str1,str2,m-1,n-1)
    else:
        return 1+min(editDistance(str1,str2,m-1,n-1),
        editDistance(str1,str2,m-1,n),
        editDistance(str1,str2,m,n-1))

def main():
    # string 1 
    str1=input()
    str2=input()
    # do recursion
    answer=editDistance(str1,str2,len(str1)-1,len(str2)-1)
    print(answer)
main()