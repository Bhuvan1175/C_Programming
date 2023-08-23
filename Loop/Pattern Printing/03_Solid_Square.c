/*
        Ques : Print the given pattern

                    * * * *
                    * * * *
                    * * * *
                    * * * *

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number Of Lines and Star In Each Line  :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}