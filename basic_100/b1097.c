#include <stdio.h>

int main()
{
    int n, i, j, x, y;
    int go[20][20] = {0,};

    for(i = 1; i < 20; i++)
    {
        for(j = 1; j < 20; j++)
        {
            scanf("%d", &go[i][j]);
        }
    }

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        for(j = 1; j < 20; j++)
        {
            if(go[x][j] == 0) go[x][j] = 1;
            else go[x][j] = 0;
        }
        for(j = 1; j < 20; j++)
        {
            if(go[j][y] == 0) go[j][y] = 1;
            else go[j][y] = 0;
        }
    }
    
    for(i = 1; i < 20; i++)
    {
        for(j = 1; j < 20; j++)
        {
            printf("%d ", go[i][j]);
        }
        printf("\n");
    }
    return 0;
}