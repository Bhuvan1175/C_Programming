 /*
    Ques : Take positive integer input and tell if it
    is divisible by 5 and 3.
*/
#include<stdio.h>
int main (){
    int Num;
    printf("Enter The Number :");
    scanf("%d",&Num);
    if(Num%5==0){
        if(Num%3==0){
            printf("Its Fully Divisible By 5 and 3");
        }
        else{
            printf("Its Not Fully Divisible By 5 and 3");
        }
    }
    else{
        printf("Its Not Fully Divisible By 5 ");
    }
    return 0;
}
