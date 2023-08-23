
// 1,3,5,7,9
//an=a+(n-1)*d
/*
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter Number Of Rows : ");
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= 2 * n - 1; i = i + 2)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}*/
//2nd Way
 #include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter Number Of Rows : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=n;j++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");

    }
}