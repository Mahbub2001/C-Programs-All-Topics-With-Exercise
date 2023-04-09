#include <stdio.h>
int main()
{
    char input;

    float kmToMIles = 0.621371;
    float inchToFoot = 0.0833333;
    float cmsToInch = 0.393701;
    float PoundToKgs = 453592;
    float inchToMeters = 0.0254;

    float first, second;

    while (1)
    {
        printf("Enter the input carracter. q to quit....q\n1.Km to Miles\n2.Inch to Foot\n3.Cms to Inch\n4.Pound to Kgs\n5.Inch To Meter\n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quiting the Program......\n");
            goto end;
            break;

        case '1':
            printf("Enter the first number : ");
            scanf("%f", &first);
            second = first * kmToMIles;
            printf("The value of MIles is= %f\n", second);

        case '2':
            printf("Enter the first number : ");
            scanf("%f", &first);
            second = first * inchToFoot;
            printf("The value of Foot is= %f\n", second);

        case '3':
            printf("Enter the first number : ");
            scanf("%f", &first);
            second = first * cmsToInch;
            printf("The value of Inch is= %f\n", second);

        case '4':
            printf("Enter the first number : ");
            scanf("%f", &first);
            second = first * PoundToKgs;
            printf("The value of Kgs is= %f\n", second);

        case '5':
            printf("Enter the first number : ");
            scanf("%f", &first);
            second = first * inchToMeters;
            printf("The value of Meters is= %f\n", second);

        default:
            printf("Wrong keyword...\n");
            break;
        }
    }
end:
    return 0;
}