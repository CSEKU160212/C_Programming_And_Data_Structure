/* c program for symbol triangle*/
#include<stdio.h>
int main()
{
    int num,r,c;
    printf("Enter loop repeat number(rows): ");
    scanf("%d",&num);
    for(r=1; r<=num; r++)
    {
        for(c=num; c>=1; c--)
            printf("%d ",c);
        printf("\n");
    }

    return 0;
}
