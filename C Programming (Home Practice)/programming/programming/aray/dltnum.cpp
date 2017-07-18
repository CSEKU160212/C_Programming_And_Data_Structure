#include<stdio.h>
int main()
{
    int i,n,a[100],p;
    printf("how many numbers: ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the numbers: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter any position to delete: ");
    scanf("%d",&p);
    printf("\n");
    if(p<0 || p>=n)
    {
        printf("Delete is Impossible.\n");
    }
    else
    {
        for(i=p+1; i<n; i++)
        {
            a[i-1]=a[i];
            n--;
        }
       // printf("%d\n",a[i]);

    }
    printf("After deleteing: \n\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }

}

