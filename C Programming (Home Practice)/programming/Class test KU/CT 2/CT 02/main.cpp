#include<stdio.h>
#include<conio.h>
int main()
{
    int L1,L2,count=0,i,j;
    scanf("%d%d",&L1,&L2);
    if(L1<=L2)
    {
        for(i=L1;i<=L2;i++)
        {
            count=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }
            if(count>=3)
            {
                printf("%d ",i);
            }
        }
    }
    getch();
}
