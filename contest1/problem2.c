// There will be several lines in the input terminated with a line containing a single '*'. This last line
// should not be processed. Each of the lines will contain either Hajj or Umrah.
// For each line of the input, output either 'Hajj-e-Akbar' or 'Hajj-e-Asghar' in separate lines without
// quotations. For exact format refer to the sample.


#include <stdio.h>
int main()
{
    char str[100];
    int i = 1;

    while (scanf("%99s", str) == 1 && str[0] != '*')
    {
        if (str[0] == 'H')
        {
            printf("Case %d: Hajj-e-Akbar\n", i);
        }
        else
        {
            printf("Case %d: Hajj-e-Asghar\n", i);
        }
        i++;
    }
    return 0;
}