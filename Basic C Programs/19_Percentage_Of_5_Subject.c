#include <stdio.h>
int main()
{
    int physics, maths, english, chemistry, Biology;
    char Name[24];
    printf("Enter Your Name:");
    scanf("%s", &Name);
    printf("Enter The Marks Of Physics:");
    scanf("%d", &physics);
    printf("Enter The Marks Of Maths:");
    scanf("%d", &maths);
    printf("Enter The Marks Of English:");
    scanf("%d", &english);
    printf("Enter The Marks Of Chemistry:");
    scanf("%d", &chemistry);
    printf("Enter The Marks Of Biology:");
    scanf("%d", &Biology);
    float percent = (physics + maths + chemistry + english + Biology) / 5;
    printf("Percentage of %s is %f ", Name, percent);
    return 0;
}
