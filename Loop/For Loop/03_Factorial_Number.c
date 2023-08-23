#include <stdio.h>
int main()
{
    int i = 1, n, fact = 1;
    printf("Enter Any Natural Number :");
    scanf("%d", &n);
    for (; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d!=%d", n, fact);
}