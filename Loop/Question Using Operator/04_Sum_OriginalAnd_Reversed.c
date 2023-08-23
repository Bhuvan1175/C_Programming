#include<stdio.h>
int main(){
    int n,r=0,m;
    printf("Enter Any Number :");
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
        r=r*10;
        m=temp%10;
        r=r+m;
        temp=temp/10;
    }
    printf("Sum OF %d and %d Is :%d",n,r,n+r);
}