/*Print The Given Pattern 
        1 2 3 4
        1 2 3 4
        1 2 3 4
        1 2 3 4 
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number Of Lines and Star In Each Line  :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            printf("%d  ",a);
            a++;
        }
        printf("\n");
    }
    return 0;

}