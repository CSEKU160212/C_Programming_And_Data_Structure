#include<stdio.h>

int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int i,j;
    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if(a[i] < b[i])
        {
            printf("-1");
            break;
        }
        else if(a[i] > b[i])
        {
            printf("1");
            break;
        }
        else
        {
            printf("0");
            break;
        }
    }
}
