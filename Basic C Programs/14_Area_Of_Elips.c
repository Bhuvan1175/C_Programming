#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Any Number A :");
    scanf("%d", &a);
    printf("Enter Any Number B :");
    scanf("%d", &b);
    int elips = 3.14 * a * b;
    printf("Area Of Elips : %d", elips);
    return 0;
}