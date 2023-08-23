/*
        Print The Given Pattern
                       A
                     A B
                   A B C
                 A B C D
*/
#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter The Number Of Rows :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        int a=65;
        for (k = 1; k <= i; k++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}