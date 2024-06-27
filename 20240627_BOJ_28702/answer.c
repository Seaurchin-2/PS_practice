// https://www.acmicpc.net/problem/28702

#include <stdio.h>
#include <string.h>

int is_number(char s[]);

int main(void)
{
    char s[3][9];  // s1 ~ s3
    int s4_n = 0;  // temporary variable to store s4

    for (int i=0; i<3; i++)
        scanf("%s", s[i]);

    for (int i=0; i<3; i++)
    {
        if (is_number(s[i]) == 1)
        {
            sscanf(s[i], "%d", &s4_n);
            s4_n += (3 - i);
            break;
        }
        else continue;
    }

    if (s4_n % 15 == 0)
        printf("FizzBuzz\n");
    else if (s4_n % 3 == 0)
        printf("Fizz\n");
    else if (s4_n % 5 == 0)
        printf("Buzz\n");
    else
        printf("%d\n", s4_n);

    return 0;
}

int is_number(char s[])
{
    for (int i=0; i<strlen(s); i++)
    {
        if ('0' <= s[i] && s[i] <= '9')
            continue;
        else if (s[i] == '\0')
            continue;
        else
            return 0;
    }
    return 1;
}