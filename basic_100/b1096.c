#include <stdio.h>

int main()
{
    int n, row, col;
    int go[19][19] = {{0,},{0,}};
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &row, &col);
        go[row -1][col -1] = 1;
    }

    for(int j = 0; j < 19; j++)
    {
        for(int k =0; k < 19; k++)
        {
            printf("%d ", go[j][k]);
        }
        printf("\n");
    }
    return 0;
}