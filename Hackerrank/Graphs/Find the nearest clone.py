import sys
from collections import defaultdict
def dfsutil(node,graph,color,shortestPathColor,visited):
    val=sys.maxsize
    step=0
    # print("The node examined: " + str(node))
    visited[node]=True
    for adj in graph[node]:
        if visited[adj]==False:
            val=min(val,dfs(adj,graph,color,shortestPathColor,step,visited))
    return val
def dfs(node,graph,color,shortestPathColor,step,visited):
    # print("The node examined: in dfs " + str(node))
    visited[node]=True
    if color[node]==shortestPathColor:
        # print("run1")
        return step+1
    elif not graph[node]:
        # print("run2")
        return sys.maxsize
    else:
        # print("run3")
        res=sys.maxsize
        # print(graph[node])
        # print(visited)
        for j in graph[node]:
            if visited[j]==False:
                res=min(res,dfs(j,graph,color,shortestPathColor,step+1,visited))
        return res
        
def main():
    graph=defaultdict(list)
    # nodes and edges
    [nodes,edges]=[int(i) for i in input().split(" ")]
    # construct graph
    for i in range(edges):
        [item1,item2]=[int(i) for i in input().split(" ")]
        graph[item1].append(item2)
        graph[item2].append(item1)
    nodeColor={}
    # Accept node colors
    colors=list(map(int, input().rstrip().split())) 
    i=1
    for color in colors:
        nodeColor[i]=color
        i+=1
    # enter the color for which shortest path have to be found
    shortestPathColor=int(input())
    count=0
    for color in colors:
        if color==shortestPathColor:
            count+=1
    if count>=2:
    # for all nodes
        minimum=sys.maxsize
        for i in range(1,nodes+1):
            visited=[False]*(len(graph)+1)
            # If color of that particular node is shortestPathColor
            if nodeColor[i]==shortestPathColor:
                # Find the adjacent nodes
                minimum=min(minimum,dfsutil(i,graph,nodeColor,shortestPathColor,visited))
                if minimum==1:
                    break
        
        if minimum!=sys.maxsize:
            print(minimum)
        else:
            print(-1)
    else:
        print(-1)

main()