#include <stdio.h>

int main()
{
    float w, h, b;
    float mb = 0;

    scanf("%f %f %f", &w, &h, &b);
    mb = w * h * b /8 /1024 /1024;
    printf("%.2f MB\n", mb);
    return 0;
}