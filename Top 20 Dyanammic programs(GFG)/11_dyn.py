scs=[]
def shortestCommonSupersequence(s1,s2):
    for i in range(len(s1)+1):
        for j in range(len(s2)+1):
            if i==0:
                scs[i][j]=j
            elif j==0:
                scs[i][j]=i
            elif s1[i-1]==s2[j-1]:
                scs[i][j]=1+scs[i-1][j-1]
            else:
                scs[i][j]=1+min(scs[i-1][j],scs[i][j-1])
    return scs[len(s1)][len(s2)]

def main():
    s1=input()
    s2=input()
    global scs
    scs=[[0 for i in range(len(s2)+1)] for j in range(len(s1)+1)]
    print(shortestCommonSupersequence(s1,s2))    
main()