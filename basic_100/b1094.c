#include <stdio.h>

int main()
{
    int n, i;
    int k[10000];
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &k[i]);
    }
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", k[i]);
    }
    return 0;
}