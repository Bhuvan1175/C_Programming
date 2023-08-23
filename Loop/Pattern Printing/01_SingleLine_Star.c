/*
        Print the given Pattern 
            ******
*/
#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter Number Of Star In One Line :");
    scanf("%d",&n);
    while(i<=n){
        printf("* ");
        i++;
    }
    return 0;


}
