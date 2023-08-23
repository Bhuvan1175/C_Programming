// Divisor x Quotoient +Remainder =Divident

#include <stdio.h>
int main()
{
    int a, b, remainder;
    printf("Enter The Value Of A :");
    scanf("%d", &a);
    printf("Enter The Value Of B :");
    scanf("%d", &b);
    remainder = a % b;
    printf("The Remainder When %d is Divided By %d is:%d", a, b, remainder);
    return 0;
}