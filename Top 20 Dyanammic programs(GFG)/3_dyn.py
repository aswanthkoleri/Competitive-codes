table=[]
def editDistance(str1,str2,m,n):
    global table
    if m==0:
        return n
    if n==0:
        return m
    # print(m,n)    
    if table[m-1][n-1]!=0:
        return table[m-1][n-1]
    if str1[m-1]==str2[n-1]:
        table[m-1][n-1]=editDistance(str1,str2,m-1,n-1)
    else:
        table[m-1][n-1]=1+min(editDistance(str1,str2,m-1,n-1),
        editDistance(str1,str2,m-1,n),
        editDistance(str1,str2,m,n-1))
    return table[m-1][n-1]

def main():
    global table
    t=int(input())
    for _ in range(t): 
        [m,n]=list(map(int,input().split(" ")))
        [str1,str2]=list(input().split(" "))
        table=[[0 for i in range(1000)] for j in range(1000)]
        # do recursion
        answer=editDistance(str1,str2,m,n)
        print(answer)
main()
