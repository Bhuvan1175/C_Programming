/*
    Print The Given Pattern

    1
    3  5
    7  9  11
    13 15 17 19
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
            a=a+2;
        }
        printf("\n");
    
    }
}