/*
    Ques : Take positive integer input and tell if it
    is divisible by 5 or not.
*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter The Number A :");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        printf("%d is Divisible by 5.", a);
    }
    else
    {
        printf("%d is Not Divisible by 5.", a);
    }
    return 0;
}