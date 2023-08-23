
/*
    Ques : Print the sum of this series :
    1 - 2 + 3 - 4 + 5 - 6... upto ‘n’.
*/
#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter Any Even Or Odd Number :");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        sum = (-n / 2);
        printf("The Series Is Even Then The Total Sum Is :%d", sum);
    }
    else
    {
        sum = (-n / 2) + n;
        printf("The Series Is Odd Then The Total Sum Is :%d", sum);
    }
    return 0;
}