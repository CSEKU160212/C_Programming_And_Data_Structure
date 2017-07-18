#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[100], ch1,ch2;
    int i,j,len=0;
    gets(A);
    scanf("%c",&ch1);//there is a tiny problem.
    scanf("%c",&ch2);
    for(i=0;A[i]!='\0';i++)
    {
        len++;
    }
    for(j=0;j<=len;j++)
    {
        if(A[j]==ch1)
        {
            A[j]=ch2;
        }
    }
    printf("%s",A);
    return 0;
}
