/*
**Objective

Today we're learning about running time! Check out the Tutorial tab for learning materials and an instructional video!

**Task

A prime is a natural number greater than  that has no positive divisors other than  and itself. Given a number, , determine and print whether it's  or .

Note: If possible, try to come up with a  primality algorithm, or see what sort of optimizations you come up with for an  algorithm. Be sure to check out the Editorial after submitting your code!

**Input Format

The first line contains an integer, , the number of test cases.
Each of the  subsequent lines contains an integer, , to be tested for primality.

**Constraints

**Output Format

For each test case, print whether @n is "Prime" or "Not prime" on a new line.

**Sample Input

3
12
5
7

**Sample Output

Not prime
Prime
Prime

**Explanation

Test Case 0: @n = 12.
@12 is divisible by numbers other than  and itself (i.e.: 2, 3, 6), so we print @"Not prime" on a new line.

Test Case 1: @n = 5.
@5 is only divisible  and itself, so we print @"Prime" on a new line.

Test Case 2: @n = 7.
@7 is only divisible  and itself, so we print @"Prime" on a new line.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void isPrime (int prime) {
  if (prime <= 1) {
    printf ("Not prime\n");
    return;
  }
  for (int j = 2; j <= (int) sqrt (prime); j++) {
    if (prime % j == 0) {
      printf ("Not prime\n");
      return;
    }
  }
  printf ("Prime\n");
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
      int prime;
      cin >> prime;
      isPrime (prime);
    }
    return 0;
}
