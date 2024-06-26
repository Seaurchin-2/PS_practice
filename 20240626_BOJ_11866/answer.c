#include <stdio.h>

int main(void)
{
    int N, K;

    scanf("%d %d", &N, &K);

    int circle[N];
    int josephus[N];
    int index=-1, loop_count;
    for (int i=0; i<N; i++) circle[i] = i+1;

    for (int i=0; i<N; i++)
    {
        loop_count = 0;
        while (loop_count < K)
        {
            index++;
            if (index >= N) index -= N;

            if (circle[index] == 0)
                continue;
            else loop_count++;
        }
        
        josephus[i] = circle[index];
        circle[index] = 0;
    }

    printf("<");
    for (int i=0; i<N-1; i++) printf("%d, ", josephus[i]);
    printf("%d>\n", josephus[N-1]);

    return 0;
}