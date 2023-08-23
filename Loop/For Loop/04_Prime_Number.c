#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter any Number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is Prime Number", n);
    }
    else
    {
        printf("%d is Not Prime Number", n);
    }
    return 0;
}