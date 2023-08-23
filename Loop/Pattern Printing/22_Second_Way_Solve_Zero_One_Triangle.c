/*
    Print The Given Triangle
    1
    0 1
    1 0 1
    0 1 0 1
*/
#include <stdio.h>
int main()
{
    int a, n, i, j;
    printf("Enter The Number of Rows :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            a = 1;
        else
            a = 0;

        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);
            if (a == 1)
                a = 0;
            else
                a = 1;
        }
        printf("\n");
    }
    return 0;
}