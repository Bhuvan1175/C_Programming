/*
    The expression x = 4 + 2 % - 8 evaluates to
    (1) -6
    (2) 6
    (3) 4
    (4) None of the above
    using precidence or BODMAS
    BODMAS = %,/,*,+,-
*/
#include<stdio.h>
int main (){
    int x= 4 + 2 % - 8;
    printf("%d",x);
    return 0;
}
//2 % -8 = 2 % 8 = 2
//Answer is 6