from collections import defaultdict
# Driver Program
def dfs(i,graph,dist,visited,maximum):
    visited[i]=True
    # For all adjacent nodes
    curr=maximum
    for j in graph[i]:
        if not visited[j]:
            temp=dfs(j,graph,dist,visited,maximum+dist[i][j])
            if temp>curr:
                curr=temp
    visited[i]=False
    return curr

def longest(graph,n,dist):
    res=0
    visited = [False]*(n+1)
    for i in range(n):
        if not visited[i]:
            maximum=dfs(i,graph,dist,visited,0)
        res=max(res,maximum)
    return res

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n=int(input())
        e=int(input())
        dist=[ [0]*(n+1) for i in range(n+1) ]
        print(dist)
        graph = defaultdict(list)
        for i in range(e):
            temp=input().split(" ")
            inp=[int(i) for i in temp]
            # print(inp)
            graph[inp[0]].append(inp[1])
            graph[inp[1]].append(inp[0])
            dist[inp[0]][inp[1]]=inp[2]
            dist[inp[1]][inp[0]]=inp[2]
        print(graph)
        print(longest(graph,n,dist))




