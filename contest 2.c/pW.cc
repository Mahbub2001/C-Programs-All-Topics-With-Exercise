#include <cmath>
#include <cstdio>

int n;
char ch[500];
float x, y;
float ax[12], ay[12], bx[12], by[12];

int main()
{
    for (n = 0;; n++)
    {
        gets(ch);
        if (ch[0] == '*')
            break;
        sscanf(ch, "r %f %f %f %f", &ax[n], &ay[n], &bx[n], &by[n]);
    }
    for (int m = 0;; m++)
    {
        scanf("%f %f", &x, &y);
        if (fabs(x - 9999.9) < 1e-3 && fabs(y - 9999.9) < 1e-3)
        {
            break;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (x > ax[i] && x < bx[i] && y < ay[i] && y > by[i])
            {
                printf("Point %d is contained in figure %d\n", m + 1, i + 1);
                count++;
            }
        }
        if (count == 0)
            printf("Point %d is not contained in any figure\n", m + 1);
    }
}