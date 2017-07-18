#include<stdio.h>
int main()

{
    int i=1;
    for(;;i++)
    {
        if(i>100)
        break;
        printf("%d\n",i);
    }
    return 0;
}
