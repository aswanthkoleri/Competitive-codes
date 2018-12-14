#!/bin/python3

import math
import os
import random
import re
import sys
from collections import defaultdict
cost=0
def dfs(i,graph,visited,c_lib,c_road,road):
    global cost
    # print(i)
    visited[i]=True
    roadCost=road*c_road
    cost+=(roadCost)
    # for all adjacent nodes traverse more
    for j in graph[i]:
        if not visited[j]:
            dfs(j,graph,visited,c_lib,c_road,1)
    return

def dfsnew(i,graph,visited,c_lib,c_road,road):
    global cost
    # print(i)

    visited[i]=True
    cost+=(c_lib)
    # for all adjacent nodes traverse more
    for j in graph[i]:
        if not visited[j]:
            dfsnew(j,graph,visited,c_lib,c_road,1)
    return


# Complete the roadsAndLibraries function below.
def roadsAndLibraries(n, c_lib, c_road, cities):
    global cost
    # create the graph first 
    graph=defaultdict(list)
    for item in cities:
        graph[item[0]].append(item[1])
        graph[item[1]].append(item[0])
    # Do the normal graph traversal
    visited=[False]*(n+1)
    if c_lib>=c_road:
        for i in range(1,n+1):
            if not visited[i]:
                cost+=c_lib
                dfs(i,graph,visited,c_lib,c_road,0)
        return cost
    else:
        # print("The second is dworking")
        for i in range(1,n+1):
            if not visited[i]:
                dfsnew(i,graph,visited,c_lib,c_road,0)
        return cost


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())
    # global cost
    for q_itr in range(q):
        cost=0
        nmC_libC_road = input().split()

        n = int(nmC_libC_road[0])

        m = int(nmC_libC_road[1])

        c_lib = int(nmC_libC_road[2])

        c_road = int(nmC_libC_road[3])

        cities = []

        for _ in range(m):
            cities.append(list(map(int, input().rstrip().split())))
        # print(cities)

        result = roadsAndLibraries(n, c_lib, c_road, cities)
        print(result)

    #     fptr.write(str(result) + '\n')

    # fptr.close()
