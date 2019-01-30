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
        # temp=graph[startNode]
        m={}
        pq=[]
        # for i in temp:
        #     if visited[i]==False:
        #         pq.append(i)
        #         visited[i]=True
        visited[startNode]=True
        m[startNode]=0

        # Find the non connected nodes and push them
        for i in range(1,n+1):
            if not graph[i]:
                # push to the pq
                pq.append(i)
                m[i]=-1
        
        heapq.heapify(pq)
        # print("priority queue")
        # print(pq)
        dist=[]
        while pq:
            # print(pq)
            # print("run")
            popped=heapq.heappop(pq)
            # print("popped : "+str(popped))
            # print(m[popped])
            # visited[popped]=True
            if m[popped]>0:
                dist.append(m[popped]*6)
            else:
                dist.append(m[popped])
            # visited[popped]
            # for all the adjacent nodes of the popped one 
            for adj in graph[popped]:
                # print(adj,end=" ")
                if visited[adj]==False:
                    m[adj]=m[popped]+1
                    visited[adj]=True
                    heapq.heappush(pq,adj)
        for i in dist:
            print(i,end=" ")
        print()

main()