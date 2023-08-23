/*

Condition to check 
first you collect the mark and check is it pass or not  
if they are pass in both subject they got 45 rs chocolate 
otherwise they passed only one subject then they got 10 rs chocolate. 

*/

#include<stdio.h>
int main(){
    int science_mark,math_mark;
    printf("Enter your Science Marks : ");
    scanf("%d",&science_mark);
    printf("You Score %d in Science \n",science_mark);
    printf("Enter your math Marks : ");
    scanf("%d",&math_mark);
    printf("You Score %d in Mark \n",math_mark);
    if(science_mark>35 && math_mark>35){
        printf(" Congrats!! You are passed in Science");
        printf(" You won 45 rs Chocolate ");
    }
    else if(science_mark>35 || math_mark>35){
        printf(" You Won 10 rs Chocolate");
    }
    else{
        printf("Better luck next time");
    }
    return 0;
}