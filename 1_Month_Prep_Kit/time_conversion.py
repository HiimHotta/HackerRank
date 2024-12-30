#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeConversion' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def timeConversion(s):
    # Write your code here
    if re.findall ("AM", s):
        if s[:2] == "12":
            format_hour = "00"
    
        else:
            format_hour = str(s[:2])
        
    else:
        if s[:2] == "12":
            format_hour = "12"
            
        else:
            format_hour = str(int(s[:2]) + 12)
        
    return format_hour + re.sub("(AM|PM)$", "", s[2:])
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = timeConversion(s)

    fptr.write(result + '\n')

    fptr.close()
