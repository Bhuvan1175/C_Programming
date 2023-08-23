//Calculate the sum of all numbers from 1 to 100.
#include<stdio.h>
int main(){
    int i=1,sum=0;
    for(i=1;i<=100;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}