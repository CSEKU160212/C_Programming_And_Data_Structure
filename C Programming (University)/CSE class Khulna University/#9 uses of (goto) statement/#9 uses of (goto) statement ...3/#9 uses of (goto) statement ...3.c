#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    scanf("%d %d",&i,&n);
    l: if(i<n)
    {
        i=i+1;
        printf("%d\n",i);
    }
    goto l;
    return 0;
    getch();
}
