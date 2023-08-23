/*
    HW : Display this GP - 100,50,25,.. upto ‘n’
    terms.
    Logic
    let Assume That First term br the a=100
    here in series the value is decreasing so our condition will be 
    a>0;
    updation i++;
    print a
    here we saw that difference in series is to /2;
    a=a/2;

    OR
    Second Way To Solve:
    By farmula Of GP:
    an=a/r^(n-1);// n be the 2
    an=100/2
    an=50;
    series will print ..
    100,50

*/
//FIRST WAY TO SOLVE 

#include<stdio.h>
int main (){
    int a=100;
    for(int i=100;a>0;i++){
        printf("%d ",a);
        a=a/2;
    }
    return 0;

} 

//SECOND WAY TO SOLVE 
#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    printf("Enter ANy Number :");
    scanf("%d",&n);
    for(i=100;i>=100/pow(2,(n-1));){
        printf("%d ",i);
        i=i/2;
    }

} 

//THIRD WAY TO SOLVE 
#include<stdio.h>
int main(){
    int i,n,a=100;
    printf("Enter Any Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        a=a/2;
    }
    return 0;
}