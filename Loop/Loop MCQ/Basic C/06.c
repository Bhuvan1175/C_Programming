/*
    The expression, a = 30 * 1000 + 2768 ; evaluates to
    (1) 32768
    (2) -32768
    (3) 113040
    (4) 0
*/
#include<stdio.h>
int main (){
    int a=30 * 1000 + 2768 ;
    printf("%d",a);
    return 0;
}
// Answer Is 32768

/*
case 2:
        If i used Data Type short then, 
        we got the answer is -32768.
*/
#include<stdio.h>
int main (){
    short b=30 * 1000 + 2768 ;
    printf("%d",b);
    return 0;
}
// After Changed data type We Get Answer is -32768.