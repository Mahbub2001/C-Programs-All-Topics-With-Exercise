// This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to warm up a bit. 
// Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. After that they found p grams of salt.

// To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. 
// The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?

// ----------------------------------------

// It should be a striaghtforward problem but I was wondering why amount of salt for one round is a multiple of total amount of salt available.
// I saw the example explanation given and realised, np was just another variable name and didn't mean product of n and p.
// Could have been clearer.

// Find the amount of drink required for one round and the number of rounds possible with it alone.
// Find the amount of limes and the number of rounds possible with them alone
// Find the amount of salt available and the number of rounds possible with them alone.

// Answer is minimum of these three.

// ------------------------------------------
#include<stdio.h>
#define min(a, b) (a < b ? a : b)
#define min_1(a, b, c) min(a, min(b, c))

int main()
{
    int n , k, l, c, d, p, nl, np;
    scanf("%d %d %d %d", &n, &k, &l, &c);
    scanf("%d %d %d %d", &d, &p, &nl, &np);

    int no_of_toasts = min_1( (k*l)/nl, c*d, p/np )/n;
    printf("%d\n", no_of_toasts);

    return 0;
}