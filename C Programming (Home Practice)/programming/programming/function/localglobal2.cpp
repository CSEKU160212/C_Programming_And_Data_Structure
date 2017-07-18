#include<stdio.h>
int f(int x)
{
    x++;
}

int main()
{
    int i = 5,j=10;
    if(i<10)
    {
        j = 10;
        i++;
    }
    printf("I1 %d\n",i);
    f(i);
    printf("I %d\n",i);
    printf("J %d\n",j);
}

/*int y =10;
int main()
{
    int y = 5;
    y++;
    printf("first %d\n",y);
    ::y++;
    printf("global %d\n",::y);

}
int f()
{
    y++;
}*/

