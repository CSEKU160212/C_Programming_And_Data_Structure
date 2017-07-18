#include <stdio.h>
#include <conio.h>
int main()
{
    int p,q,m,n;
    printf("How many lines? : \n\n");
    scanf("%d",&n);
    for(p=1; p<=n; p++)
    {
        for(q=1; q<=(n-p); q++)
        {
            printf("     ");
        }
        m = p;
        for(q=1; q<=p; q++)
        {
            printf("%5d", m++);
        }
        m = m-2;
        for(q=1; q<p; q++)
        {
            printf("%5d",m--);
        }
        printf("\n");
    }
}
