#include<stdio.h>
int main()

{
    int i;
    for(i=1;;i++)
    {
        if(i>100)
            break;
        printf("%d\n",i);
    }
    return 0;
}
