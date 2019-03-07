
from collections import defaultdict
# A python code to show the working of the disjoint set
def find(parent,i):
    if parent[i]==-1:
        return i
    else:
        return find(parent,parent[i])

def union(parent,v1,v2):
    # x=find(parent,v1)
    # y=find(parent,v2)
    parent[v1]=v2

def main():
    # create a graph first 
    graph=defaultdict(list)
    # Enter the no of nodes
    [nodes,edges]=list(map(int,input().split(" ")))
    # create parent array
    parent=[-1]*nodes
    # Enter the no of edges
    for _ in range(edges):
        [v1,v2]=list(map(int,input().split(" ")))
        graph[v1].append(v2)
    # Now find the cycles in the graph is present or not for that union and find function should be made
    # for all the combination of edges in the graph
    # for i in graph:
    #     for j in i:
    #         # first vertex
    #         v1=
    print(graph)
    for i in graph:
        for j in graph[i]:
        # print(i)
            # first chech parents are equal or not
            x=find(parent,i)
            y=find(parent,j)
            # if parents are equal then it is cyclic
            if x==y:
                print("Cyclic")
                return
            else:
                union(parent,x,y)
    print("Not cyclic")
main()
    