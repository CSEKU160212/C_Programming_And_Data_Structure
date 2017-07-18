#include <stdio.h>
#include <math.h>
#include<conio.h>

int main()
{
    int a,b,c,i,j,flag=0,count=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    if(a!=b)
    {
        for(i=a;i<=b;i++)
        {
            flag=0;
            if(i==1)
                continue;
            for(j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                count++;
            }
        }
        if(count>=1)
        {
            printf("YES,%d",count);
        }
        else
        {
            printf("NO");
        }
    }
    getch();
}
