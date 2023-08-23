#include<stdio.h>
int main(){
    int a=45;
    int b=30;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf(" value of a :%d \n",a);
    printf(" value of b :%d",b);
    return 0;
}