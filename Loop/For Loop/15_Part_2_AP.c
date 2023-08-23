/*
    HW : Display this AP - 4,7,10,13,16.. upto ‘n’
    terms.
    formula :
    an=a+(n-1)d
    here a is a first term 
    and d is a difference in series
    an=4+(n-1)*3
    an=4+3n-3
    an=1+3n
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Any number: ");
    scanf("%d",&n);
    for(int i=4;i<=(3*n+1);i=i+3){
        printf("%d ",i);
    }
}