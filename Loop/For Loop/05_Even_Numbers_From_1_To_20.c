//Print all the even numbers from 1 to 20.

#include <stdio.h>
int main()
{
    int i = 1;
    for (i = 1; i <= 20; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}