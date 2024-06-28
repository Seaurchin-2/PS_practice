// https://www.acmicpc.net/problem/6322 - 직각 삼각형의 두 변

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, count=1;
    double result = 0.0;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);

        if ((a+b+c) == 0) break;
        if (count > 1) puts("");

        printf("Triangle #%d\n", count++);

        if (a == -1)
        {
            if (b >= c) printf("Impossible.\n");
            else
            {
                result = sqrt(pow(c, 2) - pow(b, 2));
                printf("a = %.3lf\n", result);
            }
        }
        else if (b == -1)
        {
            if (a >= c) printf("Impossible.\n");
            else
            {
                result = sqrt(pow(c, 2) - pow(a, 2));
                printf("b = %.3lf\n", result);
            }
        }
        else if (c == -1)
        {
            result = sqrt(pow(a,2) + pow(b,2));
            printf("c = %.3lf\n", result);
        }
    }

    return 0;
}
