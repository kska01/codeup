#include <stdio.h>

int main()
{
    char c;
    again:
    scanf("%s", &c);
    if(c == 'q') 
    {
        printf("%c\n", c);
        return 0;
    }
    else printf("%c\n", c);
    goto again;
    return 0;
}

// 답안
// #include <stdio.h>

// int main()
// {
//     char c;
//     while(1)
//     {
//         scanf("%c", &c);
//         if(c != 'q') printf("%c\n", c);
//         else 
//         {
//             printf("q");
//             return 0;
//         }
//     }
//     return 0;
// }