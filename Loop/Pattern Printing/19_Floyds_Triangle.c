/*
    Print The Given Pattern

    1
    2 3
    4 5 6
    7 8 9 10
*/
#include<stdio.h>
int main(){
    int a,n,i,j;
    printf("Enter The Number of Rows :");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    
    }
}