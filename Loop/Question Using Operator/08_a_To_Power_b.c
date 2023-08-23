/*
        Ques : Two numbers are entered through the
        keyboard. Write a program to find the value of one
        number raised to the power of another.
*/
#include <stdio.h>
int main()
{
    int a, b, power = 1;
    printf("Enter The Value Of A: ");
    scanf("%d", &a);
    printf("Enter The Value Of B: ");
    scanf("%d", &b);
    int i = 1;
    while (i <= b)
    {
        power = power * a;
        i++;
    }
    printf("%d to the Power of %d is : %d", a, b, power);
    return 0;
}
