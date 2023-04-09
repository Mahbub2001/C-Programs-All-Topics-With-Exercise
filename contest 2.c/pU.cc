#include <cstdio>
#include <iostream>
typedef long long int64;
int main()
{
    while (true)
    {
        int64 A, B, C;
        scanf("%lld%lld%lld", &A, &B, &C);
        if (A == 0 && B == 0 && C == 0)
        {
            break;
        }
        int64 tn = A * A, nt = B * B, rt = C * C;

        if (tn + nt == rt || tn + rt == nt || rt + nt == tn)
        {
            printf("right\n");
        }

        else
        {
            printf("wrong\n");
        }
    }

    return 0;
}