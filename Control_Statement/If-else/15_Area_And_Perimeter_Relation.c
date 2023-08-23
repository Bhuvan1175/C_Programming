/*
    Ques : Given the length and breadth of a rectangle,
    write a program to find whether the area of the
    rectangle is greater than its perimeter.
    AOR=length * Breadth;
    POR=2(l+b)
*/
#include <stdio.h>
int main()
{
    int length, breadth;
    printf("Enter The length:");
    scanf("%d", &length);
    printf("Enter The Breadth:");
    scanf("%d", &breadth);
    int AOR = length * breadth;
    int POR = 2*(length + breadth);
    if (AOR > POR)
    {
        printf("Area Of Rectangle is Greater \n");
    }
    else
    {
        printf("Perimeter Of Rectangle is Greater \n");
    }
    return 0;
}