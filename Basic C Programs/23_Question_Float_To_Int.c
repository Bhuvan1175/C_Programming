/*
    Ques : Take float input and print the fractional part
            of the real number.
            a=3.14
            b=i want only integer Part not float
*/
#include <stdio.h>
int main()

{
    float a;
    printf("Enter The Value Of A :");
    scanf("%f", &a);
    int b;
    b = a;
    printf("The Real Part Of Number %f is : %d\n", a, b);
    float z = a - b;
    printf("%f", z);
    return 0;
}