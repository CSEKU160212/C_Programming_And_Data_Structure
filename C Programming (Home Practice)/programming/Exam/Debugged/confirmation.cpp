
#include<stdio.h>
int main()
{
    char st1[100],st2[100];
    gets(st1);
    gets(st2);
    int i;
    for(i=0;;i++)
    {
        if(st1[i]==st2[i])
        {
            if(st1[i]==NULL)
            {
                printf("Confirmed\n");
                break;
            }
        }
        else
        {
            printf("Sorry\n");
            break;
        }
    }
}
