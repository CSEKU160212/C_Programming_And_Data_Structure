#include<stdio.h>
int main()
{
    char c ='A';
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(c=='[')
            {
                break;
            }
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
}
