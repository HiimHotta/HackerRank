/*
Objective
Today, we're learning about Interfaces.

Task
The AdvancedArithmetic interface and the method declaration for the abstract divisorSum(n) method are provided for you
in the editor below.

Complete the implementation of Calculator class, which implements the AdvancedArithmetic interface. The implementation
for the divisorSum(n) method must return the sum of all divisors of @n.

Input Format

A single line containing an integer, @n.

Constraints

1 <= n <= 100

Output Format

You are not responsible for printing anything to stdout. The locked template code in the editor below will call your 
code and print the necessary output.

Sample Input

6

Sample Output

I implemented: AdvancedArithmetic
12

Explanation

The integer  is evenly divisible by @1, @2, @3 and @6. Our divisorSum method should return the sum of these numbers,
which is @(1 + 2 + 3 + 6). The Solution class then prints @"I implemented: AdvancedArithmetic on the first line, 
followed by the sum returned by divisorSum (which is @12) on the second line.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum (int n) = 0;
};
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                sum += i;
        }
        return sum;      
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}
