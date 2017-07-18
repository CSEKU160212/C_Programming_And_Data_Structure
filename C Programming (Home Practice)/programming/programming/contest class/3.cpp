#include <stdio.h>
int main()
{
    int a,b;
    while(1)
    {
        scanf("%d", &a);
        if(a==0)
        {
            break;
        }


        b = a*2;
        printf("%d ** %d\n",a,b);
    }
    return 0;
}
