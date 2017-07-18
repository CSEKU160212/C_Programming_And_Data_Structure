#include <stdio.h>

int main()
{
    int i,num,neg_sum=0,pos_sum=0,array[100];
    float total=0.0,avg;
    printf("Enter N numbers: \n");
    scanf("%d", &num);
    printf("Enter the numbers: \n");
    for(i=0;i<num;i++)
    scanf("%d", &array[i]);
    for(i=0;i<num;i++)
    {
        if(array[i]<0)
            neg_sum = neg_sum + array[i];
        else if(array[i]>0)
                pos_sum = pos_sum + array[i];
                else if(array[i]==0)
                    ;

        total = total + array[i];

    }
    avg = total/num;
    printf("\nPositive numbers: %d\n",pos_sum);
    printf("Negative numbers: %d\n",neg_sum);
    printf("Average: %.2f",avg);
}
