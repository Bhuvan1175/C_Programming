#include<stdio.h>
#include<math.h>
int main(){
    double principal=1200;
    double time=2;
    double rate=5;
    double Amount = (principal * ((pow((1 + rate / 100), time))));
    printf("Amount : %lf \n",Amount);
    double ci=Amount - principal;
    printf("Compound Intrest : %lf",ci);
    return 0;
}