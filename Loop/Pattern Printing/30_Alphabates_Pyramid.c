/*
        Print The Given Pattern
                    A
                   ABC
                  ABCDE
                 ABCDEFG
                ABCDEFGHI 
*/
#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter The Number Of Rows :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        int a=65;
        for(j=1;j<=2*i-1;j++){
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
}