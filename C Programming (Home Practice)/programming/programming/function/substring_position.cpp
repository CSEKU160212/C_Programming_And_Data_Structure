#include<stdio.h>
#include<string.h>
int sub_str_frequency(char [],char []);

int main()
{
    char m[1000],s[100];
    while(scanf("%s%s",m,s)!=EOF)
    {
        int lm=strlen(m),check,j;
        int ls=strlen(s),count=0;
        for(int i=0; i<lm; i++)
        {
            check=0;
            if(m[i]==s[0])
            {
                check=1;
                for(j=1; j<ls; j++)
                {
                    if(m[i+j]!=s[j])
                    {
                        check=0;
                        break;
                    }
                }
            }
            if(check==1)
            {
                printf("%d\n",i);
                i+=j-1;
            }
        }
        return count;
    }

}
