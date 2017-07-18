#include<stdio.h>

/*void f(int x)
{
    if(x<0)
        return;
    printf("%d ",x);
    f(x-1);
}
int main()
{
    f(4);
}*/

void f(int x)
{
   if(x<0)
    return;
    //printf("%d ",x);
    f(x-1);
    printf("%d ",x);

}
int main()
{
    f(4);
}

