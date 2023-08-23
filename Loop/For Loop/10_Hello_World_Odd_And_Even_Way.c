// i+3

#include <stdio.h>
int main()
{
    int n;
    printf("Enter Any natural Number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 3)
    {
        printf("Hello World\n");
    }
    return 0;
}