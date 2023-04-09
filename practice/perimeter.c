#include <stdio.h>

int main()
{
    // float radius, area, perimeter;
    // const float PI = 3.14159;

    // printf("Enter the radius of the circle: ");
    // scanf("%f", &radius);

    // area = PI * radius * radius;
    // perimeter = 2 * PI * radius;

    // printf("The area of the circle is: %f\n", area);
    // printf("The perimeter of the circle is: %f\n", perimeter);
    //  for (int i = 0; i < 3; i++)
    //  {
    //     for (int j = 0; j < 2; j++)
    //     {
    //      for (int k = 0; k < 3; k++)
    //      {
    //         printf("%d%d%d",i,j,k);
    //         printf("\n");
    //      }
    //      printf("\n");
    //     }
    //     printf("\n");

    //  }

    int times_table[10][10];
    int i, j;

    // fill the times table array
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            times_table[i][j] = (i + 1) * (j + 1);
        }
    }

    // print the times table array
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d\t", times_table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
