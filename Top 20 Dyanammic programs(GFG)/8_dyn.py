# Dynammic programming can be done using a table and Top - down programming
table=[]
def f(i,j,ar):
    if table[i][j]!=-1:
        return table[i][j]
    elif i==j:
        table[i][j]=ar[i]
        return ar[i]
    elif j==i+1:
        table[i][j]=max(ar[i],ar[j])
        return table[i][j]
    else:
        # Two option either select the first one or the last one 
        # And take the maximum out of it
        table[i][j]=max(ar[i]+min(f(i+2,j,ar),f(i+1,j-1,ar)),ar[j]+min(f(i,j-2,ar),f(i+1,j-1,ar)))
        return table[i][j]
def main():
    global table
    ar=list(map(int,input().split(" ")))
    table=[[-1 for i in range(len(ar))] for j in range(len(ar))]
    # we have to find the maximum value that the user can get 
    print(f(0,len(ar)-1,ar))
main()