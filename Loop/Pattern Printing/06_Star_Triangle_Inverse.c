/*
    Print The Given Pattern.
    "INVERSE RIGHT HALF TRIANGLE"
        *  *  *  *
        *  *  *
        *  *
        * 

    Logic:
    Here The Number Of Line is 4 (i=4);
    but Here The Number Of star in each line is 4;
    But There is twist
    when i=1 it mean first line then 4 star printed it mean j=4
    i=2;j=3;
    i=3;j=2;
    i=4;j=1;
    Here We Can say That when i increased then j decreased by number of line
    first loop will be same ;
    second loop is that;
    j star with 4 ,"j=4";"j>=i";"j--";
*/
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter The Number Of Rows And Coloumn :");
    scanf("%d",&n);
    for(i=1;i<=4;i++){
        for(j=4;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


//2nd Way For Nth Term

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter The Number Of Rows And Coloumn :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}