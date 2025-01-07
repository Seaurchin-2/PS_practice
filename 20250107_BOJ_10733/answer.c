#include <stdio.h>

int main(void)
{
    int K, num, sum=0, point=-1;

    scanf("%d", &K);
    int arr[K+1]; for (int i=0; i<K+1; i++) arr[i] = 0;

    for (int i=0; i<K; i++)
    {
        scanf("%d", &num);

        if (num == 0)
        {
            arr[point] = 0;
            if (point >= 0) point--;
            else point = -1;
        }
        else
        {
            point++;
            arr[point] = num;
        }
    }

    int j=0;
    while (arr[j] != 0) sum += arr[j++];

    printf("%d\n", sum);

    return 0;
}