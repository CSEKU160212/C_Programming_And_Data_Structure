#include<stdio.h>
/*int main()
{
    int i=1,j=1;
    for( ; ; )
    {
        if(i>5)
            break;
        else
            j+=i;
        printf("\n%d",j);
        i+=j;
    }

}*/

/*void f(int n)
{
    if(n==1)
        return;
    printf("%d",n);
    f(n-1);
}
int main()
{
    f(10);
}*/
/*int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}*/
/*int main()
{
    for(int i=1;i<=5;i++)
    {
        printf("%d\n",i);
    }
    printf("Done");
}*/
/*int main()
{
    int x=10,y=10;
    x = ++y++;
    y = --x--;
    printf("%d %d",x,y);
}*/
/*int main()
{
    int i = 21;
    do
    {
        i--;
        printf("%d",i);
    }
    while(i<=0);
}*/
int main()
{
    int a = 3,b=7;
    int c = (a&b) || (b>a);
    if(c)
    {
        printf("%d",c);
    }
}

/*int main()
{
    int i=-3,j=3;
    if(!i+!j*1)
    {
        printf("OK");
    }
    else
        printf("Not");
}*/

