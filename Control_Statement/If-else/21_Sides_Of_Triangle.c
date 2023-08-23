/*
   Ques : Take 3 numbers input and tell if they
    can be the sides of a triangle. 
    a,b,c be the three side of Triangle.
*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter Number A :");
    scanf("%d", &a);
    printf("Enter Number B:");
    scanf("%d", &b);
    printf("Enter Number C :");
    scanf("%d", &c);
    if(a+b>c && b+c>a &&a+c>b){
        printf("a,b,c Are The Three Sides Of Triangle");
    }
    else{
        printf("a,b,c Are The Three Sides Of Triangle");
    }
    
    return 0;
}