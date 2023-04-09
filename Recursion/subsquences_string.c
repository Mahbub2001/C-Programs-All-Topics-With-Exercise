/// this is most important
/// adding unique subsquence
// C program for the above approach
#include <stdio.h>
void printSubstrings(char str[])
{

	// outermost for loop
	// this is for the selection
	// of starting point
	for (int start = 0; str[start] != '\0'; start++)
	{

		// 2nd for loop is for selection
		// of ending point
		for (int end = start; str[end] != '\0'; end++)
		{

			// 3rd loop is for printing from
			// starting point to ending point
			for (int i = start; i <= end; i++)
			{
				printf("%c", str[i]);
			}

			// changing the line after printing
			// from starting point to ending point
			printf("\n");
		}
	}
}

// // Driver Code
int main()
{

	// code
	char str[30];
	printf("Enter the string that you want : ");
	gets(str);
	// calling the method to print the substring
	printSubstrings(str);
	return 0;
}

// #include <stdio.h>
// #include <string.h>

// void printing(char str[30], int start)
// {
// 	if (start > strlen(str)-1)
// 	{
// 		return;
// 	}
// 	else
// 	{
// 		for (int end = start; end < strlen(str)-1; end++)
// 		{
// 			for (int i = start; i <= end; i++)
// 			{
// 				printf("%c", str[i]);
// 			}
// 			printf("\n");
// 		}
// 		printing(str, start + 1);
// 	}
// }

// int main()
// {
// 	char str[30];

// 	printf("Enter the string that you want : ");
// 	fgets(str, 30, stdin);

// 	printing(str, 0);

// 	return 0;
// }

