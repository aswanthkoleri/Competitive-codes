
import sys
from math import sqrt

class point:
    def __init__(self,x,y):
        self.x = x
        self.y = y

def main():
    n = int(input())
    maxX=-sys.maxsize
    maxY=-sys.maxsize
    minX=sys.maxsize
    minY=sys.maxsize
    for i in range(n):
        point = input().split()
        x=int(point[0])
        y=int(point[1])
        if x > maxX:
            maxX=x
        if y > maxY:
            maxY=y
        if y < minY:
            minY=y
        if x < minX:
            minX=x
    ar=[]
    ar.append(maxX-minX)
    ar.append(maxY-minY)
    ar.append(sqrt((maxX)**2 + (maxY)**2))
    ar.append(sqrt((minX)**2 + (maxY)**2))
    ar.append(sqrt((maxX)**2 + (minY)**2))
    ar.append(sqrt((minX)**2 + (minY)**2))
    print('%.6f'%max(ar))

main()