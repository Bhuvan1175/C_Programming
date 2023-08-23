#include<stdio.h>
int main(){
    int p,n,r;
    float si;
    int i=1;
    while(i<=3){
        printf("Enter the Value of p,n,r :  \n");
        scanf("%d%d%d",&p,&n,&r);
        si=p*n*r/100;
        printf("Simple Intrest =%f \n",si);
        i=i+1;


    }
    return 0;
}