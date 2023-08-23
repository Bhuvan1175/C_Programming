/*
        Ques : Print the given pattern

                    *****
                    *****
                    *****

*/
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter The Number Of Lines :");
    scanf("%d",&n);
    printf("Enter The Number Of Star In Each Line:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}