/*

Condition to check in program
Ask student which subject they passed 
if they qualified in both then they got 45rs chocolate
else if they got passed only in maths they got 15 rs chocolate.

*/
#include<stdio.h>
int main(){
    int subject;
    printf("Which subject did you passed ? \n"
           "1 = Passed In Both sci & math \n "
           "2=  Only Passed in sci \n"
           "3=  Only Passed in math \n");
    printf("Enter your subject code :");
    scanf("%d",&subject);
    if(subject==1){
        printf("Congrats You Won The 45rs Chocolate \n");
    }
    else if(subject==2){
        printf("You Won 15 rs chocolate");
    }
    else if(subject==3){
        printf("You Won 10 rs chocolate");
    }
    else{
        printf("You won nothing");
    }
    return 0;
}