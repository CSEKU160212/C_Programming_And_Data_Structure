#include<stdio.h>
int main()
{
    int a[100],c,d,n,pos;
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
        scanf("%d",&a[c]);
    }
    for(c=0;c<n-1;c++)
    {
        pos = c;
        for(d=c+1;d<n;d++)
        {
            if(a[pos]>a[d])
            {
                pos = d;
            }
        }
        if(pos!=c)
        {
            int swap = a[c];
            a[c] = a[pos];
            a[pos] = swap;
        }
    }
    for(c=0;c<n;c++)
    {
        printf("%d ",a[c]);
    }
}
