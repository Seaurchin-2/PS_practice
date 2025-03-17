#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define exec_time
#ifdef exec_time
#include <time.h>
#endif

typedef struct coordinate
{
    int x;
    int y;
    double n;
} Coor;

Coor* merge_sort(Coor list[], int len);

int main(void)
{
    // **************************************************
    #ifdef exec_time
    clock_t begin = clock();
    #endif
    // **************************************************
    
    int N, n1, n2;
    
    scanf("%d", &N);
    Coor *list = malloc(sizeof(Coor)*N);

    for (int i=0; i<N; i++)
    {
        scanf("%d %d", &n1, &n2);
        list[i].x = n1;
        list[i].y = n2;
        list[i].n = (double)n2 + (double)(n1 / 1000000.0);
    }

    list = merge_sort(list, N);
    
    for (int i=0; i<N; i++)
        printf("%d %d\n", list[i].x, list[i].y);
    free(list);

    // **************************************************
    #ifdef exec_time
    clock_t end = clock();
    printf("%lf\n", (double)(end-begin)/CLOCKS_PER_SEC);
    #endif
    // **************************************************

    return 0;
}

Coor* merge_sort(Coor list[], int len)
{
    if (len == 1)
        return list;
    else if (len == 2)
    {
        if (list[0].n > list[1].n)
        {
            Coor *a = malloc(sizeof(Coor)*2);
            a[0] = list[1]; a[1] = list[0];
            return a;
        }
        else return list;
    }
    else
    {
        int pivot = len / 2, i1=0, i2=0, count=0;
        Coor *l1 = malloc(sizeof(Coor) * pivot);
        Coor *l2 = malloc(sizeof(Coor) * (len-pivot));

        memcpy(l1, list, sizeof(Coor)*pivot);
        memcpy(l2, list+pivot, sizeof(Coor)*(len-pivot));

        l1 = merge_sort(l1, pivot);
        l2 = merge_sort(l2, len-pivot);

        Coor *result = malloc(sizeof(Coor) * len);

        while (count < len)
        {
            if (i1 == pivot)
            {
                result[count] = l2[i2++];
            }
            else if (i2 == len-pivot)
            {
                result[count] = l1[i1++];
            }
            else
            {
                if (l1[i1].n < l2[i2].n)
                    result[count] = l1[i1++];
                else
                    result[count] = l2[i2++];
            }
            count++;
        }
        
        return result;
    }
}