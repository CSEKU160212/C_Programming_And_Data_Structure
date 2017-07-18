#include<stdio.h>
int main()
{
    int a,b,move1,move2;
    while(scanf("%d %d",&a,&b)==2&&a!=-1&&b!=-1)
    {
        if(b>a)
        {
            move1=b-a;
            move2=100-move1;
            if(move1>move2)
            {
                printf("%d\n",move2);
            }
            else
            {
                printf("%d\n",move1);
            }
        }
        else
        {
            move1=a-b;
            move2=100-move1;
            if(move1>move2)
            {
                printf("%d\n",move2);
            }
            else
            {
                printf("%d\n",move1);
            }
        }
    }
}

