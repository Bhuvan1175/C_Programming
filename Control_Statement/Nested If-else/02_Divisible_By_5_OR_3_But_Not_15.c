/*
    Ques : Take positive integer input and tell if it
    is divisible by 5 OR 3 But Not 15.
*/
#include<stdio.h>
int main (){
    int Num;
    printf("Enter The Number :");
    scanf("%d",&Num);
    if(Num%5==0||Num%3==0){
        if(Num%15!=0){
            printf("Its Fully Divisible By 5 and 3 But Not 15");
        }
        else{
            printf("Its Not Fully Divisible By 5 and 3 But Divisible By 15");
        }
    }
    else{
        printf("Its Fully Divisible By 5 OR 3 ");
    }
    return 0;
}