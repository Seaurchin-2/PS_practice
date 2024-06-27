// https://www.acmicpc.net/problem/9517 - 아이 러브 크로아티아

#include <stdio.h>
#define MAX_TIME 210

int main(void)
{
    int K, N, T, number, current_time=0;
    char Z;

    scanf("%d", &K);
    scanf("%d", &N);

    number = K;
    int questions[N][2];

    for (int i=0; i<N; i++)
    {
        scanf("%d %c", &T, &Z);

        questions[i][0] = T;
        questions[i][1] = (Z == 'T') ? 1 : 0;
    }

    for (int i=0; i<N; i++)
    {
        current_time += questions[i][0];

        if (current_time > MAX_TIME)
            break;
        
        if (questions[i][1] == 1)
            number -= (++number > 8) ? 8 : 0;
        else continue;
    }

    printf("%d\n", number);

    return 0;
}
