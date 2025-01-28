#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr):
    # Write your code here
    primary_diag = 0
    second_diag = 0
    array_size = len(arr)
    
    for i in range(array_size):
        for j in range(array_size):
            if i == j:
                primary_diag += arr[i][j] 
            if i == array_size - j - 1:
                second_diag += arr[i][j]
                
    return abs (primary_diag - second_diag)
            

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
