def setZeroes(A):
    rowN=len(A)
    colN=len(A[0])
    zeroes=[]
    for i in range(rowN):
        for j in range(colN):
            if A[i][j]==0:
                zeroes.append((i,j))
    # Now find the rows and columns to be turned to Zeroes
    zeroRows=[]
    zeroColumns=[]
    for i in zeroes:
        zeroRows.append(i[0])
        zeroColumns.append(i[1])
    
    zeroRows=list(set(zeroRows))
    zeroColumns=list(set(zeroColumns))
    
    for i in zeroRows:
        for j in range(colN):
            A[i][j]=0
    for i in zeroColumns:
        for j in range(rowN):
            A[j][i]=0
    print(A)

# if __name__=="__main__":
# # Write the main function here
#     # Accept the matrix
#     mat=[[1,0,1],[1,1,1],[1,1,1]]
#     setZeroes(mat)
