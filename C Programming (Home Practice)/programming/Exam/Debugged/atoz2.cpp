#include<stdio.h>
int main()
{
    char c;
    int i,j,n;
    scanf("%d",&n);
    c = 'A';
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(c=='Z')
            {
                break;
            }
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
}
