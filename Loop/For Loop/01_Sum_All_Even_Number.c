//Calculate the sum of all even numbers from 1 to 50.

#include<stdio.h>
int main(){
    int sum=0;
    for(int i=1;i<=50;i+=1){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("The Sum Of All Even Number Between 1 to 50 is : %d ",sum);
    return 0;
}