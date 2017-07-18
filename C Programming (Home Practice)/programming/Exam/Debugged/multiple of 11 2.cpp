#include<stdio.h>
int main()
{
    char n[100];
    int i,j,k,s,l;
    while(1)
    {
        scanf("%s",n);
        s = 0;
        for(i=0;;i++)
        {
            if(n[i]==NULL)
            {
                break;
            }
        }
        for(j=0;j<i;j++)
        {
            s=s*10 +n[j] - '0';
            s=s%11;
        }
        if(s==0 && i==1)
        {
            break;
        }
        else if(s==0)
        {
            printf("%s is a multiple of 11\n",n);
        }
        else
        {
            printf("%s is not multiple of 11\n",n);
        }

    }
}
