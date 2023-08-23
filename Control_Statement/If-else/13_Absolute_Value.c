/*
    Take integer input and print the
    absolute value of that integer.
    if we have -5 then its absolute value will be 5.
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any Number :");
    scanf("%d", &n);
    if (n < 0)
    {
        n = n * (-1);
    }
    printf("The Absolute Value is : %d", n);
    return 0;
}