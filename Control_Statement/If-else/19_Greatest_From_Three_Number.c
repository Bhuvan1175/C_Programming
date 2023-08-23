/*
    Ques : Take 3 positive integers input and print
    the greatest of them.
    1st Condition : a>b && a>c
    2nd Condition : b>a && b>c
*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any Number :");
    scanf("%d", &a);
    printf("Enter any Number :");
    scanf("%d", &b);
    printf("Enter any Number :");
    scanf("%d", &c);
    if(a>b && a>c){
        printf("%d is Greatest of Them ",a);
    }
    else if(b>a && b>c){
        printf("%d is Greatest of Them ",b);
    }
    else{
        printf("%d is Greatest of Them ",c);
    }
    return 0;
}