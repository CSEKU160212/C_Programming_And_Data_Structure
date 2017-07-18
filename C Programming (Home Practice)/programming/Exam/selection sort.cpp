#include<stdio.h>
int main()
{
    int c,d,a[100],n,swap,pos;
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
            swap = a[c];
            a[c] = a[pos];
            a[pos] = swap;
        }
    }
    for(c=0;c<n;c++)
    {
        printf("%d ",a[c]);
    }

}
