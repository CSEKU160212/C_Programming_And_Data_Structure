/*c program to print the above number pyramid*/
#include<stdio.h>
int main()
{
    int r,c,sp,n;
    printf("Enter loop repeat number(rows): ");
    scanf("%d", &n);
    for(r=1; r<=n; r++)
    {
        for(sp=n; sp>=r; sp--)
            printf("*");
        for(c=1; c<=r; c++)
            printf(" %d", c);
        printf("\n");
    }
    return 0;
}
for(r=1;r<=n;r++)
{
    for(sp=n;sp>=r;sp++)
        printf(" ");
    for(c=1;c<=r;c++)
        printf("%d",c);
}
