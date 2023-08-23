/*C program to print day of week name using switch case*/
#include<stdio.h>
int main (){
    int Day;
    printf("Enter The Day Number 1-7 :");
    scanf("%d",&Day);
    printf("Day=%d\n",Day);
    switch(Day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("NO DAY");     
    }
    return 0;

}