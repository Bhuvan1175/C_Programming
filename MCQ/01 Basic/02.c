/*
    In b = 6.6 / a + 2 * n ; which operation will be performed first?
    (1) 6.6 / a
    (2) a + 2
    (3) 2 * n
    (4) Depends upon compiler
*/

#include<stdio.h>
int main(){
    int a,n;
    int  b=6.6/a+2*n;
    printf("%d",b);
    return 0;

}
// Answer is  6.6 / a