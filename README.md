Pseudocode with Explanation

Start >>

1. Test case operation:
int test;
scanf("%d", &test);

while(test--)

2. Declare two variables:
int x, y;
scanf("%d %d", &x, &y);

3. Declare a variable named oddSum:
int oddSum = 0;

4. Declare two variables named min and max:
int min, max;

5. Run an if-else condition to set min and max:
if (x < y) {
    min = x;
    max = y;
} else {
    min = y;
    max = x;
}

6. Run a for loop from min+1 to max-1, because the problem mentions excluding X and Y.
So, we use x+1 and y-1 (if x is min and y is max):

int i;
for (i = min + 1; i <= max - 1; i++) {
    if (i % 2 != 0) {
        oddSum = oddSum + i;
    }
}

7. Print the odd summation:
printf("%d\n", oddSum);

<< End
