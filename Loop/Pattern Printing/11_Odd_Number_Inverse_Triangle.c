#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter The NUmber Of Rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=1;
        for(j=n;j>=i;j--){
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
}