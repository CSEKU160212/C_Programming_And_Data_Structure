#include<stdio.h>
int main()
{
    char st1[100],st2[100];
    gets(st1);
    gets(st2);

    int i,j,flag = 0;
    for(i=0,j=0; st1[i]!='\0' && st2[j]!='\0'; i++)
    {
        if(st2[j]==st1[i])
            j++;
    }
    if(st2[j]=='\0')
        printf("%s is Subsequent of %s\n",st2,st1);
    else
        printf("Not Subsequent\n",st2,st1);
        for(i=0;st1[i]!=NULL && !flag;i++)
        {
            if(st1[i]==st2[0])
            {
                flag = 1;
                for(j=1;st2[j]!=NULL;j++)
                    if(st1[++i]!=st2[j])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==1) printf("%s is a substring of %s",st2,st1);
        else printf("%s is not substring of %s",st2,st1);
}
