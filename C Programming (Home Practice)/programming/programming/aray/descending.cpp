#include <stdio.h>
int main()
{
    int a,i,j,n,num[30];
    printf("Enter N numbers: \n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for(i=0; i<n; i++)
        scanf("%d", &num[i]);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(num[i]<num[j])
            {
                a = num[i];
                num[i]=num[j];
                num[j] = a;
            }

        }

    }
printf("Descending order\n");
   for(i=0;i<n;i++)
    printf("%d\n",num[i]);

}

