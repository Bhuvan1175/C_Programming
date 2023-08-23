#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter Any Number :");
    scanf("%d", &n);
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("%d Digit in The Number ",count,n);
    return 0;
}
