/*
        Print The Given Pattern 
        "RIGHT HALF PYRAMID"
            *   
            *   *   
            *   *   *
            *   *   *   *
            
            Logic is To Be  
            Here We Declare That Number Of Lines Declare By "i".
            and Number Of Star In Each Line By "j".
            here WE See That In First Line i=1 and j=1.
            here WE See That In Second Line i=2 and j=2.
            here WE See That In Third Line i=3 and j=3.
            here WE See That In Fourth Line i=4 and j=4.
            Let ;
            We can See That when "i" itterate 1 time then "j" is also itterate only 1 time.
            When "i" Goes to 2nd line then "j" itterate by 2 time(Print 2 star)only 
            The condition is 
            CASE : 1
            when i=j Here we Say this is Our 1st Condition Lets Check 
            for(i=1;i<=4;i++) 
            for(j=1;j==i;j++)
            here Dry It 
            i=1;
            j=1;1==1;
            print("*")
            j++;
            j=2;2==1; x condition
            go to first loop .
            Here Case 01 Get Fail Beacause of condition "j==i".
            in case 
            i=2;
            Enter In 2nd Loop
            j=1;j==i;1==2 condirtion Get false It means Loop Can't Be Executed.
            Then There Will Only Change "j<=i" instead of "j==i".

*/  
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number Of Lines and Star In Each Line  :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

} 
// Second Way To solve 
 
#include<stdio.h>
int main(){
    int n;
    printf("Enter The Number Of Lines and Star In Each Line  :");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        a++;
        printf("\n");
    }
    return 0;

} 