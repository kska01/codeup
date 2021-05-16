#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d\n", &a);
    reload:
    if(a == 0) return 0;
    scanf("%d", &b);
    printf("%d\n", b);
    if(a-- != 0)  goto reload;
    
    return 0;
}

// 답안
// #include <stdio.h>

// int main()
// {
//     int cnt;
//     int n;

//     scanf("%d", &cnt);

//     again:
//     if(cnt-- != 0)
//     {
//         scanf("%d", &n);
//         printf("%d\n", n);
//         goto again;
//     }
//     return 0;
// }