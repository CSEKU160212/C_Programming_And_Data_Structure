#include<stdio.h>

int main()
{
   long long int L, H, i, X, l, h, temp, count, s1;

    while(scanf("%lld%lld", &L, &H)==2)
    {
        s1=0;
        if(L==0 || H==0)
            break;
        h=(L>H)?L:H;
        l=(L<H)?L:H;
        for(i=h; i>=l; i--)
        {
           temp=i;
           count=1;
            if(temp%2==0)
                temp=temp/2;
            else
                temp=3*temp+1;

            while(temp!=1)
            {
                if(temp%2==0)
                {
                    temp=temp/2;
                    count++;
                }
                else
                {
                    temp=3*temp+1;
                    count++;
                }
            }

            if(count>=s1)
            {
                s1=count;
                X=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", l, h, X, s1);
    }
    return 0;
}
