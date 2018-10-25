#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    # find max
    m=[0 for i in range(max(arr)+1)]
    # print(m)

    for i in range(len(arr)):
        m[arr[i]]=i
    # print(m)
    count=0
    for i in range(len(arr)):
        if arr[i]!=i+1:
            # print(i+1)
            # print(arr[i])
            # print(arr[m[i+1]])
            
           
            # Swap it with original position 
            temp=arr[i]
            arr[i],arr[m[i+1]]=arr[m[i+1]],arr[i]
            m[temp]=m[i+1]
            m[i+1]=i
            # print(m)
            # print(m[i+1])
            # # print(m)
            # print(arr)
            # print("********")
            count+=1
            # print(arr)
        
    # print(arr)
    print(count)
    # print(m)  

def main():
    arr= [1, 3, 5, 2, 4, 6, 8] 
    print(arr)
    minimumSwaps(arr)

main()
# if __name__ == '__main__':
#     fptr = open(os.environ['OUTPUT_PATH'], 'w')

#     n = int(input())

#     arr = list(map(int, input().rstrip().split()))

#     res = minimumSwaps(arr)

#     fptr.write(str(res) + '\n')

#     fptr.close()
