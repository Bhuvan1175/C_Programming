/*
    Print The Given Code 
            1
           121
          12312
         1234123
        123451234
*/

#include<stdio.h>
int main(){
    int n,i,j,k,l;
    printf("Enter The Number Of Rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }int a=i-1;
        for(l=1;l<=i-1;l++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}