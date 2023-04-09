#include <stdio.h>
int main()
{

    float item1, NItem1, item2, NItem2, result;
    item1 = 15;
    NItem1 = 5;
    item2 = 25;
    NItem2 = 4;

    result = ((item1 * NItem1) + (item2 * NItem2)) / (NItem1 + NItem2);
    printf("The result is = %f", result);

    return 0;
}