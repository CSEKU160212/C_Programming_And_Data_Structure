#include <stdio.h>
int main()
{
    int base,exp,value=1;
    printf("Enter base and exp\n");
    scanf("%d %d", &base,&exp);
    while(exp!=0)
    {
        value= value*base;
        exp--;
    }
    printf("%d", value);
}
