#include <stdio.h>

int main()
{
    int n, min = 24;
    int k[10000] = {0,};
    scanf("%d", &n);

    for(int i =0; i < n; i++)
    {
        scanf("%d", &k[i]);
        if(k[i] < min)
        {
            min = k[i];
        }
    }
    printf("%d\n", min);
    return 0;
}