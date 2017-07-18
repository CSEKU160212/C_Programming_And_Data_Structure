#include<stdio.h>
int main()
{
    int i,j,l;
    char st[100],st2[100];
    gets(st);
    gets(st2);
    for(i=0;; i++)
    {
        if(st[i]==NULL)
        {
            break;
        }

    }
    for(j=0; st2[j]!=NULL; j++,i++)
    {
        st[i] = st2[j];
    }
    st[i]=NULL;
    puts(st);
}
