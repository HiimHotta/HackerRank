#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pangrams' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def pangrams(s):
    aux = s.lower()
    
    # Write your code here
    letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',  \
               'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', \
               'u', 'v', 'w', 'x', 'y', 'z']
    
    for c in aux:
        if c in letters:
            letters.remove (c)
        
        if len(letters) == 0:
            return 'pangram'
            
    print (letters)    
    return 'not pangram'
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = pangrams(s)

    fptr.write(result + '\n')

    fptr.close()
