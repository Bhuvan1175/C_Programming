// Multi Digit Number
#include<stdio.h>
#include<math.h>
int main(){
    int n,temp,i=0,rem,sum=0;
    printf("Enter The Multi Digit Number :");
    scanf("%d",&n);
    temp=n;
    // To Check The User Enter Number is single digit or Multi digit Number 
    while(temp>0){
        temp=temp/10;
        i++;
    }
    //logic to check its Armstrong Number Or Not
    temp=n;
    while(temp>0){
        rem=temp%10;
        sum=sum+pow(rem,i);
        temp=temp/10;
    }
    // end of logic for armstrong number
    
    if(sum==n){
        printf("%d Is A Armstrong Number \n",n);
    }
    else{
        printf("%d Is Not A Armstrong Number \n",n);
    }
    return 0;
}