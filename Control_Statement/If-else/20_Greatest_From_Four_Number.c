/*
    Ques : Take 4 positive integers input and print
    the greatest of them.
    1st Condition : a>b && a>c && a>d
    2nd Condition : b>a && b>c && b>d
    3rd Condition : c>a && c>b && c>d
*/
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter Number A :");
    scanf("%d", &a);
    printf("Enter Number B:");
    scanf("%d", &b);
    printf("Enter Number C :");
    scanf("%d", &c);
    printf("Enter Number D :");
    scanf("%d", &d);
    if(a>b && a>c && a>d){
        printf("%d is Greatest of Them ",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is Greatest of Them ",b);
    }
    else if(c>a&&c>b&&c>d){
        printf("%d is Greatest of Them ",c);
    }
    else{
        printf("%d is Greatest of Them ",d);
    }
    return 0;
}