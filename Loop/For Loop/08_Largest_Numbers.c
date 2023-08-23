#include <stdio.h>
int main()
{
    int n, largest, num;
    printf("Enter The Set Number For Comparing : ");
    scanf("%d", &n);

    printf("Enter Any Largest Number : ");
    scanf("%d", &largest);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter Set Of Number : \n(%d) ", i);
        scanf("%d", &num);
        if (num > largest)
        {
            largest = num;
        }
    }
    printf("Largest Number is : %d", largest);
    return 0;
}