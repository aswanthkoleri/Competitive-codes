# n --> eggs
# k --> floors 
INT_MAX = 32767
egg=[]
def eggDrop(n,k):
    egg=[[0 for i in range(k+1)] for j in range(n+1)]
    for i in range(k+1):
        egg[1][i]=i
    # for 0 floors no trials and 1 floor only one trial : These are facts
    for i in range(n+1):
        egg[i][0]=0
        egg[i][1]=1
    #  Base conditions are done now
    # Now coming to DP
    for i in range(2,n+1):
        for j in range(2,k+1):
            # i=egg
            # j=floor
            minimum=INT_MAX
            for k in range(1,j+1):
                # for each floor we will calculate the minimum no of trials required and hence fill the table
                ans=1+max(egg[i-1][k-1],egg[i][j-k])
                if ans<minimum:
                    minimum=ans
            egg[i][j]=minimum

    return egg[n][k]


# Egg drop puzzle
def main():

    # enter n and k
    [n,k]=list(map(int,input().split()))
    print(eggDrop(n,k))

main()