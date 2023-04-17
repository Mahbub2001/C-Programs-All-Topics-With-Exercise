#include <stdio.h>
int main()
{
    long long int eye, mouth, body;
    scanf("%lld%lld%lld", &eye, &mouth, &body);

    long long total = 0;

    if (eye == 0 || body == 0)
    {
        total = 0;
    }
    else if (eye == 2 && body == 1 && mouth == 0)
    {
        total = 1;
    }
    else if (eye >= 1 && mouth >= 1 && body >= 1)
    {
        if (eye <= mouth && eye <= body)
        {
            total = eye;
        }
        else if (mouth <= eye && mouth <= body)
        {
            total = mouth;
            long long int extra_eye = eye - total;
            long long int extra_body = body - total;
            if (extra_eye >= 2 && extra_body >= 1)
            {
                long long av = extra_eye / 2;
                if (av >= extra_body)
                {
                    total += extra_body;
                }
                else if (av < extra_body)
                {
                    total += av;
                }
            }
        }
        else if (body <= eye && body <= mouth)
        {
            total = body;
            long long int extra_eye = eye - total;
            long long int extra_body = body - total;
            if (extra_eye >= 2 && extra_body >= 1)
            {
                long long av = extra_eye / 2;
                if (av >= extra_body)
                {
                    total += extra_body;
                }
                else if (av < extra_body)
                {
                    total += av;
                }
            }
        }
    }
    printf("%lld", total);

    return 0;
}