// #include <stdio.h>
// #include<string.h>
// int Zero(char A[100], int size)
// {

//     int zero;

//     for (int i = 0; i < size - 1; i++)
//     {
//         if (A[i] != 'x')
//         {
//             A[zero] = A[i];
//             zero++;
//         }
//     }

//     for (int i = zero; A[i] != '\0'; i++)
//     {
//         A[i] = 'x';
//     }

//     return 0;
// }

// int main()
// {
//     char A[100], size;
//     printf("Enter the size of the Array A : ");
//     fgets(A,30,stdin);

//     Zero(A, strlen(A));

//     printf("Printing the updated Elements  : \n");
//     for (int i = 0; A[i] != '\0'; i++)
//     {
//         printf("%c",A[i]);
//     }

//     return 0;
// }

// C++ implementation to Move all occurrence of letter ‘x’
// from the string s to the end using Recursion
#include <stdio.h>
#include <string.h>

// Function to move all 'x' in the end
char choose;
void moveAtEnd(char s[30], int i, int l)
{
    //ekhane static int i = 0 diyeo kora jeto..somossa silo na... tmn ti korle sudhu matro call korar age i = i + 1 dilei hyei jabe
    if (i >= l)
        return;

    // Store current character
    char curr = s[i];

    // Check if current character is not 'x'
    if (curr != choose)
        printf("%c", curr);

    // recursive function call
    moveAtEnd(s, i + 1, l);

    // Check if current character is 'x'
    if (curr == choose)
        printf("%c", curr);

    return;
}

// Driver code
int main()
{
    char s[50];
    printf("Enter the string that you want : ");
    fgets(s, 50, stdin);

    int l = strlen(s) - 1; // -1 na dile 1 line enter hye jabe
    printf("What do you want to move last : ");
    scanf("%c", &choose);
    
    moveAtEnd(s, 0, l);

    return 0;
}
