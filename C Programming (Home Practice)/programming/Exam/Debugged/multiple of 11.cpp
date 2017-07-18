#include<stdio.h>
int main()
{
    int i,j,s;
    char n[1050];
    while(1)
    {
        scanf("%s",&n);
        s = 0;
        for(i=0; ; i++)
        {
            if(n[i]==NULL)
                break;
        }
        for(j=0; j<i; j++)
        {
            s = s*10+n[j] - '0';
            s =s%11;
        }
        if(s==0 && i==1)
        {
            break;
        }
        else  if(s==0)
        {
            printf("%d is multiple of 11.\n",n);
        }
        else
        {
            printf("%d is not multiple of 11.\n",n);
        }
    }
}
