/*
    Ques : Given three points (x1, y1), (x2, y2) and
    (x3, y3), write a program to check if all the three
    points fall on one straight line.
    Slope=y2-y1/x2-x1
*/
#include<stdio.h>
int main(){
    double x1,x2,x3,y1,y2,y3;
    double slope_AB,slope_BC;
    printf("Enter The Point X1:");
    scanf("%lf",&x1);
    printf("Enter The Point X2:");
    scanf("%lf",&x2);
    printf("Enter The Point X3:");
    scanf("%lf",&x3);
    printf("Enter The Point Y1:");
    scanf("%lf",&y1);
    printf("Enter The Point Y2:");
    scanf("%lf",&y2);
    printf("Enter The Point Y3:");
    scanf("%lf",&y3);
    //A(x1,y1) B(x2,y2) C(x3,y3)
    slope_AB=(y2-y1)/(x2-x1);
    printf("Slope Of AB is : %lf\n",slope_AB);
    slope_BC=(y3-y2)/(x3-x2);
    printf("Slope Of BC is : %lf\n",slope_BC);
    if(slope_AB=slope_BC){
        printf("The Point Lies On Same Straight Line");
    }
    else{
        printf("The Point Not Lies On Same Straight Line");
    }
    return 0;
}