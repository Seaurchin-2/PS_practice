#include <stdio.h>

int main(void)
{
    int N, answer;

    scanf("%d", &N);

    answer = (N / 5) + (N / 25) + (N / 125);

    printf("%d\n", answer);

    return 0;
}