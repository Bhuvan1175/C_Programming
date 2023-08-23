#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter Any Number :");
    scanf("%d", &n);
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            int ld = n % 10;
            sum = sum + ld;
            //n = n / 10;
        }
        n = n / 10;    }
    printf("%d Is the Sum Of Given Digit", sum);
}