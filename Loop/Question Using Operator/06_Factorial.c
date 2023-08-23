#include<stdio.h>
int main(){
    int n,fact=1,i=1;
    printf("Enter Any Number :");
    scanf("%d",&n);
    while(n>=i){
        fact=fact*i;
        //i++;
        printf("factorial Of %d Is :%d\n",i,fact);
        i++;
        
    }
    printf("factorial Of %d :%d",n,fact);

}