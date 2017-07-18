#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    printf("%d",a[1]);
    for(i=2;i<n;i++)
    {
        a[i]=a[i-2]+a[i-1];
        printf("%5d",a[i]);
    }
    return 0;
}
