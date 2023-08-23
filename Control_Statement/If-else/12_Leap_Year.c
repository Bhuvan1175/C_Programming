/*
    HW : Any year is input through the keyboard. Write
    a program to determine whether the year is a leap
    year or not. (Considering leap year occurs after
    every 4 years)
*/

#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year :");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d is Leap year", year);
    }
    else
    {
        printf("%d is Not Leap Year.",year);
    }
    return 0;
}