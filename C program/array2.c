#include <stdio.h>
int main()
{    
    int marks[2][4] = {{1,2,3,4},{5,6,7,8}};


    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            printf("The value of %d , %d element of the array is %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}