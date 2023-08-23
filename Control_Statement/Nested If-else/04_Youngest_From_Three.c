/*
    HW : If the ages of Ram, Shyam and Ajay are input
    through the keyboard, write a program to
    determine the youngest of the three.
*/
#include<stdio.h>
int main(){
    int Ram,Shyam,Ajay;
    printf("Enter Age Of Ram :");
    scanf("%d", &Ram);
    printf("Enter Age Of Shyam:");
    scanf("%d", &Shyam);
    printf("Enter Age Of Ajay :");
    scanf("%d", &Ajay);
    if(Ram<Shyam){
        if(Ram<Ajay){
            printf("Ram Is Youngest Than Ajay And Shyam\n");
        }
        else{
            printf("Ajay Is Youngest Than Ram And Shyam\n");
    
        }
    }
    else{
        printf("Shyam Is Youngest Than Ajay And Ram\n");
    
    }
       
    return 0;
}