/*
    Ques : Display this AP - 100,97,94,..upto all
    terms which are positive.
    AP Formulae :
    an=a+(n-1)d
*/


#include<stdio.h>
int main(){
    int n;
    printf("Enter The any Number :");
    scanf("%d",&n);
    for(int i=100;i>=(103-(3*n));i=i-3){
        printf("%d ",i);
    }
    return 0;
}

//OR
#include<stdio.h>
int main(){
    int a=100;
    for(int i=1;a>0;i++){
        printf("%d",i);
        a=a-3;
    }
    return 0;
}