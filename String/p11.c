// palindrom or not

#include <stdio.h>
#include <string.h>

// A function to check if a string str is palindrome
void isPalindrome(char str[100])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is not a palindrome\n", str);
            return;
        }
    }
    printf("%s is a palindrome\n", str);
}

// Driver program to test above function
int main()
{
    char str[100];

    printf("Enter the string that you want : ");
    gets(str);

    isPalindrome(str);

    return 0;
}

