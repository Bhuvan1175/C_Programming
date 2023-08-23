#include<stdio.h>
int main(){
    char s[24];
    char sen[300];
    printf("Enter the string and sentence :");
    scanf("%s\n%[^\n]s",&s,&sen);
    printf("%s\n%s",s,sen);
}