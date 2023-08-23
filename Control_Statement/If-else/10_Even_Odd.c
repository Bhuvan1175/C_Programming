/*
    Ques : Take positive integer input and tell if it
    is even or odd.
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter The Number A :");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is a Even Number.", a);
    }
    else
    {
        printf("%d is a Odd Number.", a);
    }
    return 0;
}