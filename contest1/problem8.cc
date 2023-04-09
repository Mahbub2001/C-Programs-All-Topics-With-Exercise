// Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

// The task is very simple: given two integers A and B, write a program to add these two numbers and output it.

// Input
// The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

// Output
// For each test case, add A and B and display the sum in a new line.
#include <iostream>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    int i = 0;
    while (i < T)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int ans = a + b;
        printf("%d\n", ans);
        i++;
    }
    return 0;
}