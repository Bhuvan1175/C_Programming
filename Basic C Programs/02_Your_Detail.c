#include<stdio.h>
int main(){
    char name[20];
    int roll ;
    printf("Enter your Name :");
    scanf("%s",&name);
    printf("Enter your roll :");
    scanf("%d",&roll);
    printf("Your Name is %s and Your Roll Number is %d",name,roll);
    return 0;
}