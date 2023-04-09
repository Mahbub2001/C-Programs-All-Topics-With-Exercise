// Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others.
// Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers,
// he needs a program that among the given n numbers finds one that is different in evenness.
#include <stdio.h>
int a[105];
int main()
{
    int n;
    scanf("%d", &n);

    int ans1 = 0, ans2 = 0;
    int pos1, pos2;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            ans1++;
            pos1 = i;
        }
        else
        {
            ans2++;
            pos2 = i;
        }
    }
    if (ans1 > ans2)
    {
        printf("%d\n", pos2);
    }
    else
    {
        printf("%d\n", pos1);
    }

    return 0;
}