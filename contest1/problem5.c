// Some operators checks about the relationship between two values and these operators are called relational operators. Given two numerical values your job is just to find out the relationship between them
// that is (i) First one is greater than the second (ii) First one is less than the second or (iii) First and
// second one is equal.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);

        if (a > b)
        {
            printf("%c", '>');
        }
        if (a < b)
        {
            printf("%c", '<');
        }
        if (a == b)
        {
            printf("%c", '=');
        }
    }

    return 0;
}