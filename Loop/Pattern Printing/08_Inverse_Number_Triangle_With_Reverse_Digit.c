/*
    Print The Given Pattern 
        4 3 2 1
        4 3 2
        4 3 
        4


*/
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter Number Of Lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}