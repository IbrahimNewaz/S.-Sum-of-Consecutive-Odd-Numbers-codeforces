/*
S. Sum of Consecutive Odd Numbers
time limit per test1 second
memory limit per test256 megabytes

Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain two numbers X and Y (0 ≤ X, Y ≤ 104).

Output
Print the sum of all odd numbers between X and Y (excluding X and Y).
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int test;
    scanf("%d", &test);

    int t;
    for (t = 1; t <= test; t++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int oddSum = 0;
        int min, max;

        if (x < y)
        {
            min = x;
            max = y;
        }
        else
        {
            min = y;
            max = x;
        }

        int i;
        for (i = min + 1; i <= max - 1; i++)
        {
            if (i % 2 != 0)
            {
                oddSum = oddSum + i;
            }
        }
        printf("%d\n", oddSum);
    }
    return 0;
}
