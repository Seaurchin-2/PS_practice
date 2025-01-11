#include <stdio.h>
#include <string.h>

int main(void)
{
    int r, c;
    long long int result;

    scanf("%d %d", &r, &c);

    if (r && !c) puts("0");
    else
    {
        result = r;
        for (int i=0; i<(c-1); i++)
        {
            result *= r-1;
            //printf("[%2lld] %lld >> ", i, result);
            result %= 998244353;
            //printf("%lld\n", result);
        }
        printf("%lld\n", result);
    }

    return 0;
}