/*
        Print The Given Pattern
                    ****
                     ***
                      **
                       *
*/
#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter The Number Of Rows :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (n+1)-i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}