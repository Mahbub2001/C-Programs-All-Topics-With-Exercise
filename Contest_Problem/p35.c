// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     while (n--)
//     {
//         char s[51], t[51], add[101];
//         scanf("%s %s", s, t);
//         int len1 = strlen(s), len2 = strlen(t);
//         int len = len1 + len2;
//         int i = 0, j = 0;
//         for (int k = 0; k < len; k++)
//         {
//             if (i < len1 && k % 2 == 0)
//             {
//                 add[k] = s[i];
//                 i++;
//             }
//             else if (j < len2)
//             {
//                 add[k] = t[j];
//                 j++;
//             }
//             else
//             {
//                 add[k] = s[i];
//                 i++;
//             }
//         }
//         add[len] = '\0';
//         printf("%s\n", add);
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    fgets(input, 100, stdin);

    int length = strlen(input);
    char result[100];
    int j = 0;
    for (int i = length - 1; i >= 0; i--)
    {
        result[j++] = input[i];
    }
    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}
