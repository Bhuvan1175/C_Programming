#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks : ");
    scanf("%d", &marks);
    if (marks >= 90 && marks < 100)
    {
        printf("Grade A+ \n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Grade A \n");
    }
    else if (marks < 70 && marks >= 30)
    {
        printf("Grade B\n");
    }
    else
    {
        printf("Grade C\n");
    }
    return 0;
}