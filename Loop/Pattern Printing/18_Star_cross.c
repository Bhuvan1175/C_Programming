/*
    Print The Given Pattern 
                   *    *
                    * * 
                    * *
                   *   *

*/    
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter The Number Of Lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j || i+j==n+1) printf("*");
            else printf(" ");

        }
        printf("\n");
    }
}              