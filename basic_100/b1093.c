#include <stdio.h>

int main()
{
    int a[24] = {};
    int n, num;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        a[num] = a[num] + 1;
    }
    for(int j = 1; j < 24; j++)
    {
        printf("%d ", a[j]);
    }
    return 0;
}