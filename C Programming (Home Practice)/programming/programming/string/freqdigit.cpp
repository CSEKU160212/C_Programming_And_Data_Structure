#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    int freq[max+1];
    for(i=0;i<=max;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    printf("Element\t\tFrequency\n\n");
    for(i=0;i<=max;i++)
    {
        if(freq[i])
        {
            printf("%d\t\t%d\n",i,freq[i]);
        }


    }

}
