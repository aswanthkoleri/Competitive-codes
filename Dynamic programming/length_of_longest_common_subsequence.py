def main():
    # enter string 1
    s1=input()
    # enter string 2
    s2=input()
    m=len(s1)
    n=len(s2)
    # print(m,n)
    # create the LCS matrix
    LCS= [[0 for _ in range(n+1)] for _ in range(m+1)]
    # print(LCS[6][7])
    # Now do the DP programming
    for i in range(m-1,-1,-1):
        for j in range(n-1,-1,-1):
            # print(i,j)
            
            LCS[i][j]=LCS[i+1][j+1]
            # if letter at both index are the same then
            if s1[i]==s2[j]:
                LCS[i][j]+=1
            # now we have to take maximum value of LCS[i-1][j] and LCS[i][j-1]
            LCS[i][j]=max(LCS[i][j],LCS[i+1][j],LCS[i][j+1])
    # LCS[m][n] will have the LONGEST SUBSEQUENCE LENGTH
    print(LCS[0][0])
main()