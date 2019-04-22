# n --> eggs
# k --> floors 
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
    for i in range(n+1):
        for j in range(k+1):
            egg[i][j]=
# Egg drop puzzle
def main():

    # enter n and k
    [n,k]=list(map(int,input().split()))
    print(eggDrop(n,k))