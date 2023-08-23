/*
    Ques : Take 3 positive integers input and print
    the greatest of them.
*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter A Number :");
    scanf("%d", &a);
    printf("Enter B Number :");
    scanf("%d", &b);
    printf("Enter C Number :");
    scanf("%d", &c);
    if(a>b){
        if(a>c){
            printf("%d is Greater than %d and %d",a,b,c);
        }
        else{
            printf("%d is Greater than %d and %d",c,a,b);

        }
    }
    else{
        printf("%d is Greater than %d and %d",b,a,c);

    }
    return 0;
}