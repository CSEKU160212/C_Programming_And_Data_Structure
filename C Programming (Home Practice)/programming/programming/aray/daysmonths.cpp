#include<stdio.h>
int main()
{
    int temp[31],i,min,max,avg,days;
    printf("How many days? :  ");
    scanf("%d",&days);
    for(i=0; i<days; i++)
    {
        printf("Enter noonday tmp for day %d :  ",i+1);
        scanf("%d",&temp[i]);
    }
    avg = 0;
    for(i=0; i<days; i++)
    {
        avg = avg + temp[i];

    }
    printf("Average tmp: %d\n",avg/days);
    min=200;
    max=0;
    for(i=0; i<days; i++)
    {
        if(min>temp[i]) min = temp[i];
        if(max<temp[i]) max = temp[i];
    }
    printf("maximum tmp :  %d\n",max);
    printf("minimum tmp :  %d\n",min);

}
