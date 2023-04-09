// You're given an integer N. Write a program to calculate the sum of all the digits of N.

// Input
// The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num, m, sum = 0;
        cin >> num;
        while (num > 0)
        {
            m = num % 10;
            sum += m;
            num /= 10;
        }
        cout << sum << "\n";
    }
    return 0;
}
