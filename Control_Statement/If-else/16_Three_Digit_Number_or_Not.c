/*
    Take positive integer input and tell if it
    is a three digit number or not.
    Condition = 99>num<1000
*/

#include <stdio.h>
int main()
{
    int Num;
    printf("Enter any Number :");
    scanf("%d", &Num);
    if(Num>99&&Num<1000){
        printf("Its A Three  Digit Number");
    }
    else{
        printf("Its Not A Three  Digit Number");
    }
    
    return 0;
}