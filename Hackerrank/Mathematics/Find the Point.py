#!/bin/python3

import os
import sys

#
# Complete the findPoint function below.
#
def main():
    n = int(input())
    for i in range(n):
        stringInput = input().split()
        px = int(stringInput[0])
        py = int(stringInput[1])
        qx = int(stringInput[2])
        qy = int(stringInput[3])
        rx = qx - (px-qx)
        ry = qy - (py-qy)
        print(rx,end=" ")
        print(ry)
        
main()