#include<stdio.h>
int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    int i,j,k,l,flag;
    for(i=0; a[i]!=NULL; i++) {}
    for(j=0; b[j]!=NULL; j++) {}

    if(a[i]!=b[j])
    {
        printf("Not\n");
    }
    for(k=0; k<i; k++)
    {
        flag = 0;
        for(l=0; l<j; l++)
        {
            if(a[k]==b[l])
            {
                //b[l] = 7;
                flag =1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Not\n");
            break;
        }
    }
    if(flag==1)
    {
        printf("Yes\n");
    }


}
