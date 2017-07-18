#include <Stdio.h>

int main()
{
    int base,height,area;
    printf("the value of base is: ");
    scanf("%d", &base);
    printf("the value of height is: ");
    scanf("%d", &height);
    area = 0.5 * (base * height);
    printf("the area is: %d", area);
    return 0;
}
