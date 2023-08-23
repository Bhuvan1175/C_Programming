/*
    Ques : Display this GP -3,12,48,.. upto ‘n’
    terms.
    formula Of GP: 
    GP=a*r^n-1;
    r be the ration in the gp series
    logic 
    multiply by 4
*/
#include<stdio.h>
int main(){
    int n,a=3;
    printf("Enter Any Natural Number :");
    scanf("%d", &n);
    for(int i=3;i<=n;i++){
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}