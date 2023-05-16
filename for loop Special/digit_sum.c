//  #include<stdio.h>
//  int main()
//  {
//      int number,sum;

//      printf("Enter any number: ");
//      scanf("%d",&number);

//      for(sum = 0; number!=0; number/=10)
//      {
//          sum += (number%10);
//      }

//      printf("Sum of digits =  %d\n",sum);

//      return 0;
//  }


#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - i - 1]) {
      return 0; 
    }
  }
  return 1; 
}

int main() {
  char str[11];
  scanf("%s", str);

  if (is_palindrome(str)) {
    printf("Palindrome\n");
  } else {
    printf("Not Palindrome\n");
  }

  return 0;
}




// #include <stdio.h>
// int main()
// {

//     int N;
//     scanf("%d", &N);
//     long long int A[N];

//     for (int i = 0; i < N; i++)
//     {
//         scanf("%lld", &A[i]);
//     }

//     int pal = 1;

//     for (int i = 0; i < N / 2; i++)
//     {
//         if (A[i] != A[N - i - 1])
//         {
//             pal = 0;
//             break;
//         }
//     }
//     if (pal)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }