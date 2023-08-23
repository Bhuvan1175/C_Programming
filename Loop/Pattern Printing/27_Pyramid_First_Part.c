#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter The Number Of Rows :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}