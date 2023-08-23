// Single Digit To Check its Armstrong or not
#include<stdio.h>
#include<math.h>
int main(){
    int n,digit,sum=0;
    printf("Enter The Single Digit Number:");
    scanf("%d",&n);
    if(n>0 && n<9){
        printf("Valid Input , Its A Single Digit Number\n");
    }
    digit=n;
    sum=pow(digit,3)+sum;
    if(n==sum){
        printf("Its Single Digit Armstrong Number\n");
    }
    else{
        printf("Its Not Single Digit Armstrong Number\n");
    }
    return 0;
    
}