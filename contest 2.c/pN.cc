#include <iostream>
using namespace std;
int main()
{
    __int64 a, b, Kmin, Kmax, t, d;
    __int64 c, result;
    while (scanf("%I64d%I64d", &a, &b) != EOF)
    {
        t = a;
        d = b;
        result = 0;
        Kmin = Kmax = 0;
        if (a % b == 0)
        {
            c = a / b;
            Kmin = b * (c * (c - 1) / 2);
        }
        else
        {
            c = a / b;
            result = a - a / b * b;
            Kmin = result * ((c + 1) * (c) / 2);
            Kmin += (b - result) * (c * (c - 1) / 2);
        }
        a = t;
        b = d;
        Kmax = ((a - (b - 1)) * ((a - (b - 1)) - 1) / 2);
        printf("%I64d %I64d\n", Kmin, Kmax);
    }
    return 0;
}

// "Grandma, how do you handle being confined to a wheelchair when you are always so active?" She thought for an instant and then she said, "Getting old is not for sissies, and it's not even for people who are not sissies, especially if you have lost your health and mobility. But, as long as I have my mind, I can enjoy something every day, for instance, your visit right now, it's such fun to hear about your college life, particularly the classes you are taking and friends you are making."
// What she was telling me was that people have to make the best of their situation which is true at any age, not just when you're old. I felt inspired by her attitude