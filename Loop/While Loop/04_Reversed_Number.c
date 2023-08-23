#include <stdio.h>
int main()
{
    int n, c;
    printf("Enter Any Multi Digit Number :");
    scanf("%d", &n);
    printf("Original Number : %d \n", n);
    printf("Reversed Number : ");
    while (n > 0)
    {
        c = n % 10;
        printf("%d", c);
        n = n / 10;
    }
    return 0;
}