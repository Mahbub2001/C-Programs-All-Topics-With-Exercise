#include <iostream>
using namespace std;
int main()
{
    int i, fact, number, t,j;
    
    cin >> t;
    for (i = 0; i < t; i++)
    {
        fact = 1;
        cin >> number;
        for (j = 1; j <= number; j++)
        {
            fact = fact * j;
        }
        cout << fact << endl;
    }

    return 0;
}