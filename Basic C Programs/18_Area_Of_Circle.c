#include <stdio.h>
int main()
{
    int r;
    float pi = 3.14, AOC;
    printf("Enter The Radius Of Circle :");
    scanf("%d", &r);
    AOC = pi * r * r;
    printf("Area Of Circle :%f", AOC);
    return 0;
}