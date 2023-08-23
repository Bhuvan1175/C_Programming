/*
    print The Given pattern 

        1
        A B
        1 2 3
        A B C D
*/


#include<stdio.h>
int main(){
    int n,i,j,a;
    printf("Enter the Number Of Rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=i;j++){
            int c=a+64;
            if(i%2!=0){
                printf("%d ",a);
            }
            else{
                printf("%c ",c);
            }
            a=a+1;
             
        }
        printf("\n");
    }
}