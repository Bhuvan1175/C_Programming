/*
    Print Given Pattern 
    A B C D
    A B C D
    A B C D
    A B C D

*/
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter The Number Of Row : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=65;
        for(j=1;j<=n;j++){
            printf("%c ",a);
            a++;

        }
        printf("\n");
    }
}