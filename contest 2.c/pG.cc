#include <iostream>
#include <algorithm>
using namespace std;
int a[105];
int main()
{
    int n;
    int flag;
    while (scanf("%d", &n) != EOF)
    {
        flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while (1)
        {
            sort(a, a + n, greater<int>());
            flag = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] > a[i + 1])
                    a[i] = a[i] - a[i + 1];
                else
                    flag++;
            }
            if (flag == n - 1)
                break;
        }
        cout << n * a[0];
    }
    return 0;
}

// Fox Ciel is playing a game with numbers now.

// Ciel has n positive integers: x1, x2, ..., xn. She can do the following operation as many times as needed: select two different indexes i and j such that xi > xj hold, and then apply assignment xi = xi - xj. The goal is to make the sum of all numbers as small as possible.

// Please help Ciel to find this minimal sum.

// Input
// The first line contains an integer n (2≤n≤ 100). Then the second line contains n integers: x1, x2, ..., xn (1≤xi≤100).

// Output
// Output a single integer — the required minimal sum.

// Sample 1
// Inputcopy	Outputcopy
// 2
// 1 2
// 2
// Sample 2
// Inputcopy	Outputcopy
// 3
// 2 4 6
// 6
// Sample 3
// Inputcopy	Outputcopy
// 2
// 12 18
// 12
// Sample 4
// Inputcopy	Outputcopy
// 5
// 45 12 27 30 18
// 15
// Note
// In the first example the optimal way is to do the assignment: x2 = x2 - x1.

// In the second example the optimal sequence of operations is: x3 = x3 - x2, x2 = x2 - x1.