#include<stdio.h>
int main()
{
    int i=1;
    while(1)
    {
        if(i<=100)
            {
                printf("%d\n",i);
                i=i+1;
            }
        else if(i>100)
            break;
    }
    return 0;
}
