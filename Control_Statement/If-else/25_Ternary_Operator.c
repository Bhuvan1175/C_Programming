// exp1  ?  exp2  :  exp3;
//(Ternary Operator)

#include<stdio.h>
int main(){
    int age;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    age>=18?printf("Can Vote"):printf("Can't Vote");
    return 0;
}