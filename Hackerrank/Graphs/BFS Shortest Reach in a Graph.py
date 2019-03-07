from collections import defaultdict
import heapq
def main():
    # queries
    queries=int(input())
    # create graph 
    for _ in range(queries):
        graph=defaultdict(list)
        [n,e]=list(map(int,input().split(" ")))
        # for i in range(1,n+1):
        for _ in range(e):
            [item1,item2]=[int(i) for i in input().split(" ")]
            graph[item2].append(item1)
            graph[item1].append(item2)

        # print(graph)
        # get start node
        startNode=int(input())
        visited=[False]*(n+1)
        dist=[]
        # Find all the adjacent nodes of StartNode and push it into the queue
        pq=[]
        m={}
        # TO track depth 
        temp=graph[startNode]
        for i in temp:
            if visited[i]==False:
                pq.append(i)
                m[i]=1
                visited[i]=True
        # Now run loop until queue 
        while pq:
            popped=pq.pop(0)
            # Search for all the adjacent nodes
            for i in graph[popped]:
                if visited[i]==False:
                    pq.append(i)
                    m[i]=m[popped]+1
                    visited[i]=True
        # Now we have all the depths of the nodes connected to start node
        # Print the result
        for i in range(1,n+1):
            if i!=startNode:
                if i in m:
                    print(m[i]*6,end=" ")
                else:
                    print(-1,end=" ")
        print()
                 
        # for i in dist:
        #     print(i,end=" ")
        # print()

main()