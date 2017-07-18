#include<stdio.h>

int main()
{
    int n,max,i,j,k,t,count=1,pos;
    while(scanf("%d",&n)==1)
    {
        int a[n];
        int res[n];
        max = 0;
        count = 1;

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        while(1)
        {
            max = -1;
            for(i=0; i<n; i++)
            {
                if(a[i]>max)
                {
                    max = a[i];

                }
            }
            if(max==-1) break;
            pos = count;
            for(i=0; i<n; i++)
            {
                if(a[i]==max)
                {
                    a[i]= -1;
                    res[i]=pos;
                    count++;
                }
            }

        }
        for(i=0; i<n; i++)
        {
            printf("%d ",res[i]);
        }
        printf("\n");
    }

}
