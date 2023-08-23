/*
    Print The Given Pattern 
            *
            *
    *   *   *   *   * 
            * 
            * 
*/
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter The Number Of Lines :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==n/2+1 || j==n/2+1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}