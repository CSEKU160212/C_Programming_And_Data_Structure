//150217//
#include<stdio.h>
int main()
{
    char a[100],b[100];
    printf("Enter 1st string: \n");
    gets(a);
    printf("Enter 2nd string \n");
    gets(b);
    int i,j,k,l,flag,pos=0;
    for(i=0; a[i]!='\0'; i++) {}
    for(j=0; b[j]!='\0'; j++) {}
    for(k=0; k<i; k++)
    {
        if(a[k]==b[0])
        {
            flag = 1;
            for(l=1; l<j; l++)
            {
                pos = k;
                if(a[k+l]!=b[l])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            printf("Substring FOUND at position %d ",pos+1);
            break;
        }
    }
   /* if(flag==1)
    {
        printf("Substring FOUND at position %d ",pos+1);
    }*/
    if(flag==0)
    {
        printf("Not Substring!");
    }

}

