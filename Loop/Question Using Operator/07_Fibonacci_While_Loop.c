#include<stdio.h>
int main(){
    int n,n1=1,n2=1,n3,i=1;
    printf("Enter Any Number :");
    scanf("%d",&n);
    while(n>=i){
        //printf("%d ",n1);
        printf("The %d Fibonacci Number is :%d \n",i,n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
        i++;
    }
    return 0;
}