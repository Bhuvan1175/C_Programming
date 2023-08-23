/*
        Print The Given Pattern
        A B C D
        A B C
        A B
        A
*/

#include <stdio.h>
int main()
{
    int a, n, i, j;
    printf("Enter Number Of Lines :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = 65;
        for (j = n; j >= i; j--)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
}