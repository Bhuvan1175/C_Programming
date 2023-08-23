/*
        Print The Given Pattern
                    *
                   **
                  ***
                 ****
*/
#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter The Number Of Rows :");
    scanf("%d", &n);
    int a = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}