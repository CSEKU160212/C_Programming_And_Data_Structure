#include<stdio.h>
int main()
{
    char ch[10000];
    int i, length, count;
    while(gets(ch))
    {
        count=0;
        length=strlen(ch);

        for(i=0; i<length; i++)
        {

    if(ch[i]!='.'){
       if(ch[i]==' ')
            {
                count++;
            }
        }
        }
        printf("%d\n", ++count);
    }
    return 0;
}
