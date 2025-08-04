/*  
A data analytics company was tasked with developing a unique digital signature system based on the
concept of &quot;super digits.&quot; The system required finding a single-digit representation of a given
number through recursive digit summation. The algorithm was defined as follows:

If the number has only one digit, it is its super digit. Otherwise, the super digit is the super digit of
the sum of its digits, repeated recursively until a single digit is obtained.
The challenge involved an additional complexity—constructing the number by concatenating a given
string representation of an integer multiple times. For example, if the number n was represented as
a string and concatenated k times, the super digit of the resulting number needed to be calculated.
For instance:
Given n = 9875 and k = 4, the number is represented as 9875987598759875.
The sum of digits in this number is calculated recursively until a single digit remains:
9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 + 9 + 8 + 7 + 5 = 116
1 + 1 + 6 = 8
The super digit is 8.
The system was required to handle large numbers efficiently by leveraging mathematical insights
rather than explicitly constructing large concatenated strings. This case study called for
implementing a recursive solution to calculate the super digit, supported by a mathematical
approach to optimize the handling of repeated sums.  
*/
// another way of doing it
#include <iostream>
#include <string>
using namespace std;

int superDigit(string n, int k)
{
    long long sum = 0;
    for (char digit : n)
    {
        sum += digit - '0';
    }
    sum *= k;
    while (sum > 9)
    {
        long long temp = 0;
        while (sum > 0)
        {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
    }
    return sum;
}

int main()
{
    string n;
    int k;
    cin >> n >> k;
    int result = superDigit(n, k);
    cout << result << endl;
    return 0;
}


