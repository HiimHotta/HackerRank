#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'lonelyinteger' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def lonelyinteger(a):
    aux = [0] * len(a)
    
    for idx, i in enumerate (a):
        for jdx, j in enumerate (a[idx+1:]):
            if (i == j):
                aux[idx] = 1
                aux[jdx + idx + 1] = 1
                break                
                
    return a[aux.index(0)]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = lonelyinteger(a)

    fptr.write(str(result) + '\n')

    fptr.close()
