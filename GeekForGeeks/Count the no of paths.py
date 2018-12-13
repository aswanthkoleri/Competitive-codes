from collections import defaultdict
# Driver Program
def creategraph(n, arr, graph):
    i = 0
    while i < 2 * e:
        graph[arr[i]].append(arr[i + 1])
        i += 2
count=0
def dfs(curr,graph,dest,visited,path):
    global count
    visited[curr]=True
    path.append(curr)
    if curr==dest:
        # print(path)
        # print("Done")
        count+=1
    # For all the adjacent nodes 
    for i in graph[curr]:
        if not visited[i]:
            dfs(i,graph,dest,visited,path)
    visited[curr]=False
    path.pop()
    return

def countPaths(source,dest,graph,n):
    global count
    count=0
    visited=[False]*n
    dfs(source,graph,dest,visited,[])
    return count

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n,e=list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        graph = defaultdict(list)
        creategraph(e, arr, graph)
        source,dest=list(map(int, input().strip().split()))
        count=countPaths(source,dest,graph,n)
        print(count)