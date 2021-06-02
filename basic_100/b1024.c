#include <stdio.h>

int main()
{
    char a[30];
    int i;
    
    scanf("%s", a);
    for(i = 0; a[i] != '\0'; i++)
    {
        printf("\'%c\'\n", a[i]);
    }
}