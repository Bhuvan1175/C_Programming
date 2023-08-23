/*
    Ques : Given a point (x, y), write a program to find
    out if it lies on the x-axis, y-axis or at the origin, viz.
    (0, 0).
    y-Axis       : x=0,y=Any Number.
    X-Axis       : y=0,x=Any Number.
    Origin       : x=0,y=0.
*/
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter The point Of X :");
    scanf("%d",&x);
    printf("Enter The point Of y :");
    scanf("%d",&y);
    if(x==0 && y>0){
        printf("Coordinates Lies On Y-Axis");
    }
    else if(y==0 &&x>0){
        printf("Coordinates Lies on X-Axis");
    }
    else if(x==0&&y==0){
        printf("Coordinate Lies On origin");
    }
    else{
        printf("Coordinate Lies On Both Axis");
    }
    return 0;
}