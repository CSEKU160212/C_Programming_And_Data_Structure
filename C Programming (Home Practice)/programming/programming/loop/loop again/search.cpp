#include <stdio.h>
int main()
{
    int array[100],search,count=0,c,n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter %d elements are: \n",n);
    for(c=0; c<n; c++)
    {
        scanf("%d", &array[c]);
    }
    printf("Enter the number to search \n");
    scanf("%d", &search);
    for(c=0; c<n; c++)
    {

        if(array[c]==search)
        {
            printf("%d is present at location %d\n",search,c+1);
            count++;
        }
    }
    if(count==0)
    {
        printf("%d is not present here.\n",search);
    }
    else
    {
        printf("%d is present %d times in array.\n",search,count);
    }


}
