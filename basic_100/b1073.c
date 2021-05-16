#include <stdio.h>

int main()
{
    int a = 1;
    while(a != 0)
    {
        scanf("%d", &a);
        if(a != 0)
        {
            printf("%d\n", a);
        }
        else return 0;
    }
    return 0;
}

// 답안
// #include <stdio.h>

// int main()
// {
//     int n = 1;
//     while(1)
//     {
//         scanf("%d", &n);
//         if(n == 0) break;
//         printf("%d\n", n);
//     }
//     return 0;
// }