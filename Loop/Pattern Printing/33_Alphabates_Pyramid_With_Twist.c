/*
    Print The Given Code 
          
            A
           ABA
          ABCBA
         ABCDCBA
        ABCDEDCBA
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
        int a=65;
        for(k=1;k<=i;k++){
            printf("%c",a);
            a++;
        }
        int c=64+i-1;
        for(l=1;l<=i-1;l++){
            printf("%c",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}