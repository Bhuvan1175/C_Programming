/*
    Ques : Take positive integer input and tell if it
    is divisible by 5 or 3.
    (Using || Operator)
*/
#include <stdio.h>
int main()
{
    int Num;
    printf("Enter any Number :");
    scanf("%d", &Num);
    if (Num % 5 == 0 || Num % 3 == 0)
    {
        printf("Its Fully Divisible By 5 And 3");
    }
    else
    {
        printf("Its Not Fully Divisible By 5 And 3");
    }
    return 0;
}