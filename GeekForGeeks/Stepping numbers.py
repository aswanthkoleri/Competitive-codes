out=[]
def dfs(i,s,e):
    global out
    # print(i)    
    if i<=e:
        out.append(i)
        # print(i)
    else:
        return
    # Generate the two neighbours and apply dfs
    # neighbour 1
    if i%10>0 and i%10<9:
        neigh1=i*10 + i%10+1
        neigh2=i*10 + i%10-1
        dfs(neigh1,s,e)
        dfs(neigh2,s,e)
    elif i%10==0:
        neigh=i*10+i%10+1
        dfs(neigh,s,e)
    elif i%10==9:
        neigh=i*10+i%10-1
        dfs(neigh,s,e)
    return

def main():
    t=int(input())
    while t:
        global out
        out=[]
        # enter the range 
        s,e=list(map(int, input().strip().split()))
        for i in range(0,10):
            if i==0:
                out.append(0)
                # print(0)
            else:
                dfs(i,s,e)
        # print(out)
        count=0
        for i in out:
            if i in range(s,e+1):
                count+=1
        print(count)
        t-=1

main()
        