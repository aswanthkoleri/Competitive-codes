#!/bin/python3

import os
import sys

#
# Complete the handshake function below.
#
def comb(n,i):
    count=0
    mul=i
    denominator=1
    for k in range(i):
        denominator*=mul
        mul-=1
    numerator=1
    mul=n
    for k in range(i):
        numerator*=mul
        mul-=1
    return (numerator//denominator)

def handshake(n):
    return comb(n,2)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = handshake(n)

        fptr.write(str(result) + '\n')

    fptr.close()
