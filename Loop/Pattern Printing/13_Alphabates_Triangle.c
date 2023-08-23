/*
    Print The Given Triangle
        A
        A B
        A B C
        A B C D
*/
#include<stdio.h>
int main(){
    int n,i,j,a;
    printf("Enter the Number Of Rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=65;
        for(j=1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
}