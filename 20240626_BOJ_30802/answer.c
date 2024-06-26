#include <stdio.h>

int main(void)
{
    int N, T, P;
    int shirts[6]; // S,M,L,XL,XXL,XXXL
    int result_T=0, result_P1=0, result_P2=0;

    scanf("%d", &N);

    for (int i=0; i<6; i++)
        scanf("%d", &shirts[i]);
    
    scanf("%d %d", &T, &P);

    for (int i=0; i<6; i++)
    {
        if (shirts[i] % T == 0)
            result_T += shirts[i] / T;
        else
            result_T += (shirts[i] / T) + 1;
    }

    result_P1 = N / P;
    result_P2 = N % P;

    printf("%d\n%d %d\n", result_T, result_P1, result_P2);

    return 0;
}