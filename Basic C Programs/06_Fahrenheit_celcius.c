#include<stdio.h>
int main(){
    int f,c;
    printf("Enter the Temp in Fahrenite :");
    scanf("%d",&f);
    c=(((f-32)*5)/9);
    printf("The Temperature in Degree celcius : %d",c);
    return 0;
}