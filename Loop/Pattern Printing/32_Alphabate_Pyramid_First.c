#include<stdio.h>
int main(){
    int n,i,j,k,l;
    printf("Enter The Number Of Rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int c=64+i-1;
        for(l=1;l<=i-1;l++){
            printf("%c",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}