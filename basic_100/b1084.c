#include <stdio.h>

int main()
{
    int i, j, k, c = 0;
    int r, g, b;

    scanf("%d %d %d", &r, &g, &b);
    for(i = 0; i <= r -1; i++)
    {
        for(j = 0; j <= g - 1; j++)
        {
            for(k = 0; k <= b -1; k++)
            {
                printf("%d %d %d\n", i, j, k);
                c++;
            }
        }
    }
    printf("%d\n", c);
    return 0;
}