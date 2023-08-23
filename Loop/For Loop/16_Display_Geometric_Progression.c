/*
    Ques : Display this GP - 1,2,4,8,16,32,.. upto ‘n’
    terms.
    formula Of GP: 
    GP=a*r^n-1;
    r be the ration in the gp series
    logic 
    multiply by 2
*/
#include<stdio.h>
int main(){
    int n,a=1;
    printf("Enter Any Natural Number :");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*2;
    }
    return 0;
}