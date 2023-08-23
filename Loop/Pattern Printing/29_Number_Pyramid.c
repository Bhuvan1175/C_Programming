/* 
    Print The Given Pattern 
           1
          123
         12345
        1234567
*/
/*
        Print The Given Pattern 
                 *
                ***
               *****
              *******
             *********
            ***********
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
        for(j=1;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}