#include <stdio.h>
#include <string.h>

int main(void)
{
    char line[101];

    // gets_s is more safe but BOJ doesn't supply that func :(
    gets(line);

    int len = strlen(line);

    if (strcmp("eh?", line+(len-3))) printf("Imposter!\n");
    else printf("Canadian!\n");

    return 0;
}