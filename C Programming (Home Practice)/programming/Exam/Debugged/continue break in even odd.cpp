#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            continue;
        printf("%d ",i);
    }
    for(i=1;i<=n;i++)
    {
        if(!(i%2)==0)
        continue;
        printf("\n\n%d ",i);

    }

}
