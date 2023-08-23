#include <stdio.h>
int main()
{
    int r;
    float VOS, pi = 3.14;
    printf("Enter The Radius : ");
    scanf("%d", &r);
    VOS = 4 * pi * r * r * r / 3;
    printf("Volume Of Sphere :%f", VOS);
    return 0;
}