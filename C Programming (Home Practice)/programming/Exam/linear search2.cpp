#include<stdio.h>
int main()
{
    int i,n,search,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The number to be searched\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("%d is found at %d",search,i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("%d is not in array",i);
    }
}
