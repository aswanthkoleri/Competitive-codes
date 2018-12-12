from collections import defaultdict
# Driver Program
def creategraph(n, arr, graph):
    i = 0
    while i < 2 * e:
        graph[arr[i]].append(arr[i + 1])
        graph[arr[i + 1]].append(arr[i])
        i += 2

# Your task is to complete this function
# Function should return True/False or 1/0
# Graph(graph) is a defaultict of type List
# n is no of Vertices's
def dfs(i,graph,visited,parent):
    visited[i]=True
    # For all adjacent nodes
    for j in graph[i]:
        if not visited[j]:
            if dfs(j,graph,visited,i):
                return True
        elif j!= parent:
            return True
    return False

def isCyclic(n,graph):
    visited=[False for i in range(n)]
    # print(visited)
    for i in range(n):
        if not visited[i]:
            ans=dfs(i,graph,visited,-1)
            if ans==True:
                return ans
    return False

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n,e = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        graph = defaultdict(list)
        creategraph(e, arr, graph)
        # print(graph)
        if isCyclic(n, graph):
            print(1)
        else:
            print(0)
